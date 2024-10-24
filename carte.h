#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <vector>

using namespace std;

class Carte {
private:
    string titlu;
    vector<string> autori;
    string editura;
    string isbn;
    int an_aparitie;
    double pret;

public:
    // constructor
    Carte(string titlu, vector<string> autori, string editura, string isbn, int an_aparitie, double pret);

    // getteri pentru a accesa datele private
    string getTitlu() const;
    string getEditura() const;
    string getISBN() const;

    // metodă pentru afisarea informatiilor despre carte
    void afiseazaInformatii() const;
};

#endif // CARTE_H
