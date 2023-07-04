#include "salle.h"

salle::salle(int num, int c) : num_salle(num), capacite(c)
{

}

salle::~salle()
{

}
int salle::verifcapacite(int n)
{
	if (n > capacite)

		return -1;
	else
		return 1;

}

void salle::afficher_salle()
{
	cout << " Num salle :   " << num_salle << "\n" << endl;
	cout << " Capacite  :  " << capacite << endl;
}

