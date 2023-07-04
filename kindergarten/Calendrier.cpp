#include "Calendrier.h" 
#include<iostream>
#include<vector>
using namespace std;




Calendrier::Calendrier()
{
	cout << "entrer annee scolaire" << endl;
	cin>>anneeScolaire; 
	
	//Calendrier::remplirCalendr();

}



Calendrier::~Calendrier()
{
	//destr vector
}



void Calendrier::creercal(fstream& fe)
{

	fe.open("calendrier.txt", ios::in | ios::out | ios::app);
	if (!fe.is_open())  exit(-1);

}

void Calendrier::remplircal(fstream& fe)
{
	
	fe << " calendrier " << anneeScolaire << endl;
	


}


void Calendrier::affichercal(fstream& fe)
{
	char ch[100];
	fe.seekg(0);
	while (1)
	{
		fe.getline(ch, 100);
		if (fe.eof()) break;
		cout << ch << endl;
	}
}













/*void Calendrier::remplirCalendr()
{



	for (int i = 0; i <= 2; i++)
	{
		Mois m = Mois(); 
		Mois* q;
		q = &m; 
		//Mois* q = new Mois;
		//q->saisirmois();
		TabCalendar.push_back(q);
	}

	
	/*Mois* q;
	char r; 
	cout << "entrer un mois" << endl;
	Mois m = Mois();
	q = &m;
	TabCalendar.push_back(q);
	cout << "Rajouter (o/n) ? " << endl;
	cin >> r;
	while (r == 'o');
	{
		cout << "entrer un mois" << endl;
		Mois m = Mois();
		q = &m;
		TabCalendar.push_back(q);
		cout << "Rajouter (o/n) ? " << endl;
		cin >> r;
	}  
	
}


void  Calendrier::afficheCalendar()
{
	for (int i = 0; i <= 2; i++)
	{
		cout << TabCalendar[i] << endl; ;
		cout << "		";
	}
	/*cout << endl;
	for (int i = 4  ; i <= 7; i++)
	{
		TabCalendar[i]->afficheMois();
		cout << "		";
	}
	cout << endl;
	for (int i = 8; i <= 11; i++)
	{
		TabCalendar[i]->afficheMois();
		cout << "		";
	}
	cout << endl;
}
*/