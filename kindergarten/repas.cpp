#include "repas.h"


repas::repas(int code, string n, date date) : code_repas(code), nom_repas(n), date_repas(date)
{

}
repas::~repas()
{

}

void repas::saisir_repas()
{


	cout << " entrez la date  :\n " << endl;
	date_repas.saisir();
	cout << " entrez le repas du jour : \n " << endl;
	cin >> nom_repas;

}


void repas::afficher_repas()
{
	cout << "\n Le repas du jour est   :" << nom_repas << endl;
	cout << "\n Cet repas est servi le  :" << endl;
	date_repas.afficherdate();

}

