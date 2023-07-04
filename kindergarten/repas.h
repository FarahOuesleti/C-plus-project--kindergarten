#pragma once
#include<iostream>
#include <string.h> 
#include "date.h" 
using namespace std;
class repas
{
	int code_repas;
	string nom_repas;
	date date_repas;
public:
	repas(int = 0, string = "pasta", date = (1, 22, 2222));
	~repas();
	void saisir_repas();
	void afficher_repas();
	void setcode_repas(int code_repas) { this->code_repas = code_repas; }
	void setnom_repas(string nom_repas) { this->nom_repas = nom_repas; }
	int getcode_repas() { return this->code_repas; }
	string getnom_repas() { return this->nom_repas; }

};

