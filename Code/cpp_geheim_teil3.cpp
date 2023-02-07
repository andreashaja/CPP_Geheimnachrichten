/**
 * Zweck: Dritter Teil des Projekts "Geheime Nachrichten"
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
    int caesar = 5; // Geheime Code-Zahl

    int cnt = 0;
    while (cnt < input.size())
    {
        // TEIL 3: Erzeugen von Geheim-Nachrichten
        // Buchstabe zu Zahl umwandeln
        int ascii = (int)input[cnt];

        // Zahl um festen Wert verschieben ...
        int res;
        if (encode == true) // Verschlüsseln
        {
            res = (ascii + caesar - 32) % 95 + 32;
        }
        else // Entschlüsseln
        {
            // FEHLT NOCH
        }

        // Zahl zu Buchstabe rückwandeln
        char code = (char)res;

        // Neuen Buchstaben an Ergebnis anhängen
        output.push_back(code);

        cnt++;
    }
    cout << "Nachricht: " << output << endl;

    return EXIT_SUCCESS; // wahlweise auch 0
}