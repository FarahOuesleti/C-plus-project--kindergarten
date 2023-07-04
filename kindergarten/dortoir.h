#pragma once
#include"salle.h"
#include <iostream>
using namespace std;

class dortoir : public salle

{
	int nbrlit;
public:
	dortoir(int = 99);
	~dortoir();
	void setnbrlit(int nbrlit) {
		this->nbrlit = nbrlit;
	}
	int getnbrlit() { return nbrlit; }
	void ajouterlit(int);
	void  afficher_salle();


};


