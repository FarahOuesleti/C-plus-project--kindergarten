#pragma once
#include "Employee.h"
#include<string>
#include<fstream>

class Ouvrier :  public Employe 
{
    float p;

public:
    Ouvrier(string="aaaaa", int=0, int=0, char='h', string="aaa", float = 1200.200, float= 120.0 );
    ~Ouvrier() {};
    void setp() {
        cout << "entrer pourcentage de retrait sur les jours d'absence d'un ouvrier: " << endl;
        cin >> p;
    }
    static void creerouv(fstream&);
    static void remplirouv(fstream&);
    static void afficherouv(fstream&);
    //float CalculSalaire(float);
};



