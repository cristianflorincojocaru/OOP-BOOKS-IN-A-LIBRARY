#include "biblioteca.h"
#include <iostream>

// adaugă o carte în bibliotecă
void Biblioteca::adaugaCarte(const Carte& carte) {
    carti.push_back(carte);
}

// caută cărți după titlu
vector<Carte> Biblioteca::cautaTitlu(const string& titlu) const {
    vector<Carte> rezultate;
    for (const Carte& carte : carti) {
        if (carte.getTitlu() == titlu) {
            rezultate.push_back(carte);
        }
    }
    return rezultate;
}

// caută cărți după editură
vector<Carte> Biblioteca::cautaEditura(const string& editura) const {
    vector<Carte> rezultate;
    for (const Carte& carte : carti) {
        if (carte.getEditura() == editura) {
            rezultate.push_back(carte);
        }
    }
    return rezultate;
}

// caută cărți după ISBN
vector<Carte> Biblioteca::cautaISBN(const string& isbn) const {
    vector<Carte> rezultate;
    for (const Carte& carte : carti) {
        if (carte.getISBN() == isbn) {
            rezultate.push_back(carte);
        }
    }
    return rezultate;
}

// afișează toate cărțile din bibliotecă
void Biblioteca::afiseazaToateCartile() const {
    for (const Carte& carte : carti) {
        carte.afiseazaInformatii();
        cout << "-----------------\n";
    }
}
