#pragma once
#include "salle.h"
#include <vector> 
#include"repas.h"
class cantine :public salle
{

	vector <repas*> rep;
public:
	cantine(int = 99, int = 99);
	void modif_repas(int, string, date);
	void supp_repas(int);
	void afficher_salle();



};



