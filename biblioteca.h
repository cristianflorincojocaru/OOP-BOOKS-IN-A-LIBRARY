#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "carte.h"
#include <vector>

using namespace std;

class Biblioteca {
private:
    vector<Carte> carti;

public:
    // adaugă o carte în bibliotecă
    void adaugaCarte(const Carte& carte);

    // caută cărți după titlu, editură sau ISBN
    vector<Carte> cautaTitlu(const string& titlu) const;
    vector<Carte> cautaEditura(const string& editura) const;
    vector<Carte> cautaISBN(const string& isbn) const;

    // afișează toate cărțile din bibliotecă
    void afiseazaToateCartile() const;
};

#endif // BIBLIOTECA_H

