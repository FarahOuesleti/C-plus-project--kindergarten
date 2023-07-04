#include "dortoir.h"


dortoir::dortoir(int  nb) : nbrlit(nb)
{

}



dortoir::~dortoir()
{}


void dortoir::ajouterlit(int n)
{
	if (n + nbrlit > capacite)
		cout << "\n desoler  il n'y a pas de place disponible \n" << endl;
	else
		nbrlit = n + nbrlit;
}


void dortoir::afficher_salle()
{
	salle::afficher_salle();
	cout << "\n nombre de lit disponible : " << nbrlit << endl;
}
