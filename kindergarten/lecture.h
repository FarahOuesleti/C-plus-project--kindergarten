#pragma once
#include<iostream>
#include"salle.h" 
#include <vector> 
using namespace std;

class lecture : public salle
{

	string duree;
	string nom_lecture;
public:
	lecture(string = "ecriture", string = "2h");
	~lecture();
	void saisir();
	void afficher_salle();
	void setnomlecture(string nom_lecture) { this->nom_lecture = nom_lecture; }
	void setduree(string duree) { this->duree = duree; }
	string getnomlecture()
	{
		return  this->nom_lecture;

	}
	string getduree() {
		return this->duree;
	}

};



