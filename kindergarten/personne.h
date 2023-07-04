#pragma once
#include "date.h"
#include<iostream>
#include <string>
#include <vector>
using namespace std; 

class personne
{
protected:
	string nom;
	int CIN;
	int numtel;
	char gender;
	string adrsemail;
	date datenaiss;
	vector <date*> abs;

public:
	personne(string ="tttt", int = 0, int  = 0, char = 'h', string = "gggg");
	virtual ~personne(); 
	string getnom() { return nom; }
	int getnumtel() { return numtel; }
	char getgender() { return gender; }
	string getadrsemail() { return adrsemail; }
	virtual void saisir(); 
	virtual void afficher(); 
	void AjoutAbs(int , int , int ) ;
	friend istream& operator>>(istream&, personne&);
	friend ostream& operator>>(ostream&, personne&);

    

};
