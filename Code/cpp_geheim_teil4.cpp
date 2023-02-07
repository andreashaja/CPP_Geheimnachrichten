/**
 * Zweck: Letzter Teil des Projekts "Geheime Nachrichten"
 *
 * Lernziele:
 * -
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "     .--------. " << endl;
    cout << "    / .------. \\ " << endl;
    cout << "   / /        \\ \\ " << endl;
    cout << "   | |        | |" << endl;
    cout << "  _| |________| |_" << endl;
    cout << ".' |_|        |_| '." << endl;
    cout << "'._____ ____ _____.'" << endl;
    cout << "|     .'____'.     |" << endl;
    cout << "'.__.'.'    '.'.__.'" << endl;
    cout << "'.__  |GEHEIM|  __.'" << endl;
    cout << "|   '.'.____.'.'   |" << endl;
    cout << "'.____'.____.'____.'" << endl;
    cout << "'.________________.'" << endl;
    cout << endl;

    // TEIL 1: Ver- oder Entschlüsselung auswählen
    string input;
    cout << "Ver- oder Entschlüsseln? (v/e): ";
    getline(cin, input);

    bool encode = false; // später ENTschlüsseln
    if (input == "v")
    {
        cout << "Text zum VERschlüsseln: ";
        encode = true;
    }
    else if (input == "e")
    {
        cout << "Text zum ENTschlüsseln: ";
    }
    else
    {
        cout << "Ungültige Eingabe!" << endl;
        exit(EXIT_FAILURE); // Fehlercode melden
    }

    // TEIL 2: Textzeichen nacheinander verarbeiten
    string output;
    getline(cin, input);
    int caesar = 1; // Geheime Code-Zahl

    int cnt = 0;
    while (cnt < input.size())
    {
        // TEIL 3: Erzeugen von Geheim-Nachrichten
        // Buchstabe zu Zahl umwandeln
        int ascii = (int)input[cnt];

        // Zahl um festen Wert verschieben ...
        int new_ascii;
        if (encode == true) // Verschlüsseln
        {
            new_ascii = (ascii + caesar - 32) % 95 + 32;
        }
        else // Entschlüsseln
        {
            new_ascii = ascii - caesar;
            if(new_ascii<32) 
                new_ascii = 127 + (new_ascii - 32);
        }

        // Zahl zu Buchstabe rückwandeln
        char code = (char)new_ascii;

        // Neuen Buchstaben an Ergebnis anhängen
        output.push_back(code);

        cnt++;
    }
    cout << "Nachricht: " << output << endl;

    return EXIT_SUCCESS; // wahlweise auch 0
}