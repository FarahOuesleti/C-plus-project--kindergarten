#pragma once
#include "Employee.h"
#include <fstream> 
#include<string>
class Professor :public Employe
{
    float p;
public:
    Professor(string , int , int , char , string, float , float );
    ~Professor();
    void setp() {
        cout << "entrer pourcentage de retrait sur les jours d'absence d'un professeur : " << endl;
        cin >> p;
    }

static void creeprof(fstream&);
static void remplirprof(fstream&);
static void afficherprof(fstream&);
 //float CalculSalaire(float);
};

