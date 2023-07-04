#include "Mois.h"
#include<iostream>
using namespace std;

Mois::Mois(int n, string name, int nb)
{
	cout << "entrer num mois" << endl;
	cin >> NMois;
	cout << "entrer nom mois" << endl;
	cin >> NomMois;
	cout << "entrer nb jours " << endl;
	cin >> nbjours;
	while (nbjours < 1)
	{
		cout << "Veuillez entrer un nbre de jours valide (>=28)" << endl;
		cin >> nbjours;
	}
	
	Mois::remplirMois();
}
Mois::~Mois()
{
	// destr vector
}

void Mois::remplirMois()
{
	string TT;
	Day d; 
	for (int i = 0; i < 2; i++)
	{
		Day* q = new Day; 
		cout << "entrer un jour : Quelle type de jour est il ? [ Etude / Vacance ]" << endl;
		cin >> TT;
		//if (TT == "Etude")
		//	Day d = Dayetude(); 
		//else
			//Day d = DayVac();
		    q = &d; 
		//q->saisirDay(); 
		Month.push_back(q); 

	}
	/*Day* q;
	char r;
	cout << "entrer un jour" << endl;
	Day d = Day();
	q = &d;
	Month.push_back(q);
	cout << "Rajouter ? (o/n) " << endl;
	cin >> r;
	while (r == 'o');
	{
		cout << "entrer un jour" << endl;
		Day d = Day();
		q = &d;
		Month.push_back(q);
		cout << "Rajouter ? (o/n) " << endl;
		cin >> r;
	}*/

}

void Mois::afficheMois()
{
	
	cout <<" num mois "<<NMois << endl;
	cout <<"nom mois"<<NomMois << endl;
	cout <<"nbjours"<<nbjours << endl;
	for (int i = 0; i < Month.size(); i++)
	{
		cout << this->Month[i] << endl; 
	}
	/*for (int i = 0; i <= 3; i++)
		cout << '|';
	for (int j = 0; j <= 6; j++)
		if (typeid(Month[j]) == typeid(Dayetude))
			cout << j + 1 << '|'<<endl ;
		else if (typeid(Month[j]) == typeid(DayVac)) // freeday=1 signifie : un jour ne contenant pas d'event
			cout << '*' << '|' << endl; 
		else
			cout << '#' << '|'<<endl ;*/
}
void Mois::saisirmois()
{
	cin>> NMois;
	cin>>NomMois;
	cin>>nbjours;

}