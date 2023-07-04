#pragma once
#include "Day.h"
#include "evenement.h"
#include <iostream>
#include <string>
using namespace std;

class DayVac : public Day
{
    bool freeDay;
    Evenement event;

public:

    DayVac(int j, int m ) : Day(j, m)
    { 
        Evenement evt; 
        bool t; 
        event = evt ; 
        freeDay = t; 

    }
    void afficherDay();
    bool getfreeday() { return freeDay;  }
    void saisirDay();
    //void initProg();





};
