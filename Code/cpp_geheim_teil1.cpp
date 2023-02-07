/**
 * Zweck: Erster Teil des Projekts "Geheime Nachrichten" (B)
 *
 * Lernziele:
 * - Mehrfachverzweigung mit else-if erzeugen
 * - Catch-All-Verzweigung mit finalem else erzeugen
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Ver- oder Entschlüsseln? (v/e): ";
    getline(cin, input);

    bool encode = false; // später ENTschlüsseln
    if (input == "v")
    {
        cout << "Text zum VERschlüsseln: " << endl;
        encode = true;
    }
    else if (input == "e")
    {
        cout << "Text zum ENTschlüsseln: " << endl;
    }
    else
    {
        cout << "Ungültige Eingabe!" << endl;
        exit(EXIT_FAILURE); // Fehlercode melden
    }
    cout << "encode = " << encode << endl;

    return EXIT_SUCCESS; // wahlweise auch 0
}