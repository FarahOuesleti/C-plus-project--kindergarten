#include "salle.h"
#include "date.h"
#include "cantine.h"   
#include "lecture.h" 
#include "salle_admin.h"
#include <iostream>
#include "dortoir.h" 
#include"personne.h"
#include "Employee.h"
#include "ouvrier.h"
#include "Professor.h"
#include "enfant.h"
#include "activite.h"
#include <fstream>  
#include"Calendrier.h"
#include "evenement.h"
//#include"Mois.h"
using namespace std;

void  main()

{    
	int choix; 
	int choixemp; 
	fstream fe; 
	fstream fouv; 
	fstream fprof;
	fstream fcal; 
	fstream fevent; 
	Enfant enf(5, 250); 
	Calendrier cal;
	Evenement event; 

	cout << "**************************************" << endl;
	progprin:
	{
	cout <<"            "<<"1-Gestion enfant  .\n" <<"        "<< endl;
	cout <<"            "<<"2-Gestion employees   .\n" <<"         "<<endl;
	cout <<"            "<<"3-Gestion salles   .\n" <<"        "<< endl;
	cout <<"            "<<"4--Calendrier . \n" << endl; 
	cout <<"            "<<"5--Evenement .\n" <<"         " <<endl;
	}
	cout << "**************************************" << endl;
	cout << "choix : " << endl; 
	cin >> choix; 
	system("cls");
	if (choix == 1)
	{
		   
			Enfant::creer(fe);
			Enfant::remplir(fe);
			system("cls");
		    Enfant::afficher(fe);
			goto progprin; 

	}
	else
	
		if (choix == 2)

		{   employeee:
			{cout << "1-ouvrier .\n" << endl;
			cout << "2-prof .\n" << endl; }
			cin >> choixemp;
			system("cls");
			if (choixemp == 1)
			{
		
				Ouvrier::creerouv(fouv);
				Ouvrier::remplirouv(fouv);
				system("cls");
				Ouvrier::afficherouv(fouv);

				goto employeee;
			}
			else

				if (choixemp == 2)
				{
					Professor::creeprof(fprof);
					Professor::remplirprof(fprof);
					system("cls");
					Professor::afficherprof(fprof);
					goto employeee;
				}
			goto progprin;
		}
	
	else
		
		if (choix ==3)
		{
			//*****cantine****/


			date d(1, 2, 2000);
			cantine c(11, 11);
			date d2(13, 14, 2022);
			system("cls");
			c.afficher_salle();
			c.modif_repas(3, "lasagne ", d2);
			c.afficher_salle();


			/********lecture**/

			lecture t("anglais", "2h");
			t.setnumsalle(4);
			t.setcap(12);
			t.saisir();
			system("cls");
			t.afficher_salle();


			/******salle admin****/

			salle_admin ad(44);
			ad.setcap(2);
			ad.setnumsalle(12);
			ad.afficher_salle();


			/******dortoire***/

			dortoir dr(2);
			dr.setcap(12);
			dr.setnumsalle(2);
			dr.setnbrlit(8);
			cout << "*******ajouter un lit********* " << endl;
			dr.ajouterlit(14);
			cout << "----------------------" << endl;
			dr.afficher_salle();
			goto progprin;

		}
		else 
			if(choix==4)
			{
				cout << "----------------calendrier------------------" << endl;
				cal.creercal(fcal);
				cal.remplircal(fcal);
				system("cls");
				cal.affichercal(fcal);
				goto progprin; 
			
			}
			else 
				if (choix == 5)
				{
					cout << "-------------evenements--------------------------" << endl;

					event.creerevent(fevent);
					event.remplirevent(fevent);
					system("cls");
					event.afficherevent(fevent);
					goto progprin; 
					
				}
				

	system ("PAUSE");

}


