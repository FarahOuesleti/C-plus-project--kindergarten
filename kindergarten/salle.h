#pragma once
#include<iostream>
using namespace std;
class salle
{
protected:
	int capacite;
	int num_salle;
public:
	salle(int = 0, int = 0);
	virtual ~salle();
	virtual void afficher_salle();
	void setcap(int capacite) { this->capacite = capacite; }
	void setnumsalle(int num_salle) { this->num_salle = num_salle; }
	int getcapacite() { return this->capacite; }
	int getnum_salle() { return this->num_salle; }
	int verifcapacite(int);
};


