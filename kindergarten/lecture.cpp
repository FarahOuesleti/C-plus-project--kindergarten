#include "lecture.h"


lecture::lecture(string n, string d) : nom_lecture(n), duree(d)
{

}

lecture::~lecture()
{

}

void lecture::saisir()
{
	cout << "\n saisir le  nom de la lecture :" << endl;
	cin >> nom_lecture;
	cout << "\n saisir la duree de la lecture :" << endl;
	cin >> duree;

}
void lecture::afficher_salle()
{
	salle::afficher_salle();
	cout << "\n nom lecture : " << nom_lecture << endl;
	cout << "\n duree :" << duree << endl;

}
