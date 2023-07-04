#pragma once
#include "personne.h"
#include<string>
#include<stdio.h>
#include"conge.h"
#include <vector>

class Employe : public personne
{
protected:      

    vector<conge*> ListConge; 
    float salaireEmp;

public:
    Employe(string = "", int = 0 ,int = 000 , char='o' , string="adress" ,float=00.00);
    virtual ~Employe() { cout << "destr Employe" << endl; };
    virtual void afficherPersonne();
    void saisirp (); 
   //virtual float CalculSalaire(float) = 0;
    void RemplirConge();
    float getsalaire() { return salaireEmp; }
   
};


