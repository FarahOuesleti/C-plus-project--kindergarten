#pragma once
#include<string>
#include<vector>
#include"Day.h" 
#include"Dayetude.h"
#include"DayVac.h"
using namespace std; 
class Mois
{
	int NMois;
	string NomMois;
	int nbjours;
	vector<Day*> Month;
public:
	Mois(int = 0, string = "", int = 0);
	~Mois();
	void saisirmois(); 
	void remplirMois();
	void afficheMois();


};
