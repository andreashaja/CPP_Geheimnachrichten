/**
 * Zweck: Zweiter Teil des Projekts "Geheime Nachrichten"
 *
 * Lernziele:
 * - Einlesen eines Strings 
 * - Zeichenweises abarbeiten eines Strings
 * - Darstellung von Zeichen als ASCII-Codes
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

    // TEIL 2: Textzeichen nacheinander verarbeiten
    string text;
    getline(cin, text);

    int cnt = 0;
    while(cnt<text.size())
    {
        // Zeichen und ASCII-Code ausgeben
        cout << text[cnt] << ": "; // Zeichen
        cout << (int)text[cnt] << endl; // Code
        cnt++; 
    }
    cout << endl;



    return EXIT_SUCCESS; // wahlweise auch 0
}