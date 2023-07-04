#pragma once
#include<vector>
//#include"Mois.h"
#include <string>
#include <fstream>
#include<iostream>
using namespace std; 

class Calendrier
{
	string  anneeScolaire ;
	//fstream fe; 
	//vector<Mois*> TabCalendar ; 
public:
	Calendrier();
	~Calendrier();
    void creercal(fstream&);
	  void remplircal(fstream&);
   void affichercal(fstream&);

	//void remplirCalendr();
	//void afficheCalendar();
};

