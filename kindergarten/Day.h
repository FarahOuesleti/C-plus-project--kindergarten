#pragma once 
#include <string>
#include <iostream>

using namespace std;

class Day
{
protected:
    int numJour;
    int numMois;

public:

    Day(int j = 0, int m = 0) :numJour(j), numMois(m)
    {
        cout << "jour" << endl; 
        cin >> numJour; 
        cout << "Mois" << endl; 
        cin >> numMois; 
    }

    int getNumJour() { return numJour; };
    void setNumJour(int j) { numJour = j ; }; 
    int getNumMois() { return numMois; };
    void setNumMois(int m) { numJour = m; };
    virtual void saisirDay();
    virtual void afficherDay();



};

