#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Activite
{
    string nomAct;
   

public:

    Activite(string ch = "") : nomAct(ch)
    {
    }
    void saisirAct();
    void afficherAct();
    string getNomAct() { return nomAct; };
    void setNomAct(string ch) { nomAct = ch; };

};

