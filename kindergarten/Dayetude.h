#pragma once
#include "Day.h"
#include "Activite.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Dayetude : public Day

{
    vector <Activite*> emploi ;

public:

    Dayetude(int j = 0, int m = 0) :Day(j, m)
    {
        char choix;
        do
        {
            Activite* q = new Activite;
            q->saisirAct();
            emploi.push_back(q);
            cout << "rajouter ?" << endl;
            cin >> choix;
        }

        while ((choix == 'O') || (choix == 'o'));
    }

    ~Dayetude()
    {
        for (int i = 0; i < emploi.size(); i++)
            delete emploi[i];
        emploi.clear();
    }

    void saisirDay();

    void afficherDay();

};


