#include "Employee.h"
#include<string>
#include"conge.h"
using namespace std;


Employe::Employe(string ch , int c, int tel, char g, string adress, float salaire) : personne(ch,c,tel,g,adress) , salaireEmp(salaire)
{

	cout << "const employe" << endl;
    
}



void Employe::afficherPersonne()
{
	personne::afficher(); 
	cout << " salaire net : " << salaireEmp << endl; 
	for (int i = 0; i < ListConge.size(); i++)
	{
		ListConge[i]->afficherConge();
		cout << "---------------" << endl;
	}
}

/*float Employe::CalculSalaire(float p)
{
	for (int i = 0; i < abs.size(); i++)
	{
		if (abs[i]->comparerDate(getdebutconge(), getfinCong()) == false)
			salaireEmp -= salaireEmp * p;
		else continue;
	}
}

*/

void Employe::saisirp()

{
	char msg; 
	personne::saisir(); 
	cout << "salaire   :" <<endl; 
	cin >> salaireEmp; 
	cout << "l'employe a t'il des journées de conges ?" << endl; 
	cin >> msg; 
	if(msg=='o')
	{
		Employe::RemplirConge(); 
	}


}




void Employe::RemplirConge()
{
	conge k;
	conge* c;
	char r;
	cout << "entrer un conge" << endl;
	k = conge();
	c = &k;
	ListConge.push_back(c);
	cout << "Rajouter ? " << endl;
	cin >> r;
	while (r == 'o')
	{
		cout << "entrer un conge" << endl;
		k = conge();
		c = &k;
		ListConge.push_back(c);
		cout << "Rajouter ? ( o/n) " << endl;
		cin >> r;
	}
}




//float Employe::CalculSalaire(float p)
//{
	//return salaireEmp; 
//}
