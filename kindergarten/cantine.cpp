#include "cantine.h"

cantine::cantine(int c, int n) : salle(c, n)
{
	for (int i = 0; i < 5; i++)
	{
		repas* q = new repas;
		q->saisir_repas();
		rep.push_back(q);

	}


}


void cantine::modif_repas(int i, string n, date d)
{

	repas* q = new repas(i, n, d);
	rep.insert(rep.begin() + i, q);


}



void cantine::supp_repas(int i)
{
	rep.erase(rep.begin() + i);
}



void cantine::afficher_salle()
{
	salle::afficher_salle();
	cout << "\n les repas disponible  pendant la semaine : \n " << endl;
	for (int i = 1; i < rep.size(); i++)
	{
		cout << "---------------------" << endl;
		cout << "\n REPAS NUM " << i << endl;
		rep[i]->afficher_repas();
	}
}
