#include "evenement.h"


Evenement::Evenement(string nom)
{
	eventName = nom; 

}



void Evenement::afficheEvent()
{
	cout << "EVENT : " << eventName << endl;
	cout << "DEscrip/Programme" << description<<endl;

}



void Evenement::creerevent(fstream& fe)
{

	fe.open("evenement.txt", ios::in | ios::out | ios::app);
	if (!fe.is_open())  exit(-1);

}

void Evenement::remplirevent(fstream& fe)
{
	char msg; 
	do
	{
		cin >> eventName;
		fe << "  " << "nom de l'event :" << eventName << endl;
		cin >> description;
		fe << "  " << "description :" << description << endl;
		fe << " " << "---------------------------------------" << endl;
		cout << "rajouter ? " << endl; 
		cin >> msg; 
	} while (msg == 'o'); 



}


void Evenement::afficherevent(fstream& fe)
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
