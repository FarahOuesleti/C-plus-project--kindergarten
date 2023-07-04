#pragma once
#include<iostream>
#include "salle.h"
#include <vector >
using namespace std;

class salle_admin : public salle
{
	int code_salle;
	//vector <employe> tab_employe 
public:
	salle_admin(int = 22);
	~salle_admin();
	void afficher_salle();
	int getcode_salle() { return code_salle; }


};


