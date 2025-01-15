#include "carte.h"
#include <iostream>

// constructor
Carte::Carte(string titlu, vector<string> autori, string editura, string isbn, int an_aparitie, double pret) 
    : titlu(titlu), autori(autori), editura(editura), isbn(isbn), an_aparitie(an_aparitie), pret(pret) {}

// getteri
string Carte::getTitlu() const {
    return titlu;
}

string Carte::getEditura() const {
    return editura;
}

string Carte::getISBN() const {
    return isbn;
}

// metodă pentru afișarea informațiilor despre carte
void Carte::afiseazaInformatii() const {
    cout << "Title: " << titlu << "\n";
    cout << "Authors: ";
    for (const string& autor : autori) {
        cout << autor << " ";
    }
    cout << "\nPublisher: " << editura << "\n";
    cout << "ISBN: " << isbn << "\n";
    cout << "Year of publication: " << an_aparitie << "\n";
    cout << "Price: " << pret << " RON\n";
}

