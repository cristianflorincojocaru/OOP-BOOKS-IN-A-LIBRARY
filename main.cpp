#include "biblioteca.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// funcție pentru citirea unei cărți de la tastatură
Carte citesteCarteDeLaTastatura() {
    string titlu, editura, isbn, autor;
    int an_aparitie;
    double pret;
    int numar_autori;
    vector<string> autori;

    // citire titlu
    cout << "Enter the book title: ";
    getline(cin, titlu);

    // citire autori
    cout << "Enter the number of authors: ";
    cin >> numar_autori;
    cin.ignore(); // ignoră newline rămas în buffer
    for (int i = 0; i < numar_autori; ++i) {
        cout << "Enter author " << i + 1 << ": ";
        getline(cin, autor);
        autori.push_back(autor);
    }

    // citire editura
    cout << "Enter the publisher: ";
    getline(cin, editura);

    // citire ISBN
    cout << "Enter the ISBN: ";
    getline(cin, isbn);

    // citire an apariție
    cout << "Enter the year of publication: ";
    cin >> an_aparitie;

    // citire preț
    cout << "Enter the price: ";
    cin >> pret;
    cin.ignore(); // ignoră newline rămas în buffer

    // returnează cartea citită
    return Carte(titlu, autori, editura, isbn, an_aparitie, pret);
}

int main() {
    Biblioteca biblioteca;
    int numar_carti;

    // citire număr de cărți de adăugat în bibliotecă
    cout << "Enter the number of books to add to the library: ";
    cin >> numar_carti;
    cin.ignore(); // ignoră newline rămas în buffer

    // citirea cărților de la tastatură și adăugarea în bibliotecă
    for (int i = 0; i < numar_carti; ++i) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        Carte carte = citesteCarteDeLaTastatura();
        biblioteca.adaugaCarte(carte);
    }

    // afișăm toate cărțile din bibliotecă
    cout << "\nAll books in the library:\n";
    biblioteca.afiseazaToateCartile();

    // căutare după titlu
    string titlu_cautat;
    cout << "\nEnter the book title to search: ";
    getline(cin, titlu_cautat);

    vector<Carte> carti_gasite = biblioteca.cautaTitlu(titlu_cautat);
    
    if (!carti_gasite.empty()) {
        cout << "\nBooks found with the title '" << titlu_cautat << "':\n";
        for (const Carte& carte : carti_gasite) {
            carte.afiseazaInformatii();
        }
    } else {
        cout << "No books found with the title '" << titlu_cautat << "'.\n";
    }

    return 0;
}
