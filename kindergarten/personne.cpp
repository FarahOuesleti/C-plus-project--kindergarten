#include"personne.h"



personne::personne (string ch , int c  , int tel , char g , string adrs ) : nom(ch), CIN(c), numtel(tel), gender(g), adrsemail(adrs)
{
	date dnaiss;
	datenaiss = dnaiss;
}

personne::~personne()
{

}
void personne::saisir()
{
	cout << "veuillez saisir votre  nom : \n " << endl;
	cin >> nom;
	cout << "veuillez saisir votre num de tel  : \n " << endl;
	cin >> numtel;
	cout << " veuillez saisir votre adresse email : \n " << endl;
	cin >> adrsemail;
	cout << " veuillez saisir votre date naissance : \n " << endl;
	datenaiss.saisir();
	/*do {*/
	cout << " gender  : \n " << endl;
	cin >> gender;
	/*}*/
	/*while (gendre != 'F' || gendre != 'H');*/
}

void personne::afficher()
{
	cout << " Nom : \n " << nom << endl;
	cout << " Num de tel  : \n " << numtel << endl;
	cout << " Adresse email : \n " << adrsemail << endl;
	cout << " Date Naissance : \n " << endl;
	datenaiss.afficherdate();
	cout << " gender  : \n " << gender << endl;
	cout << " Absences  : \t" << endl;
	for (int i = 0; i < abs.size(); i++)
	{
		abs[i]->afficherdate();
		cout << "---------------" << endl;
	}


}

void personne::AjoutAbs(int j, int m, int a)
{
	date* q = new date(j, m, a);
	abs.push_back(q);

}
istream& operator>>(istream& in, personne& p)
{

	cout << "entrer id :" << endl;
	in >> p.CIN;
	cout << "entrer nom  et prenom :" << endl;
	in >> p.nom;
	cout << "entrer sexe :" << endl;
	in >> p.gender;
	cout << "entrer numtel:" << endl;
	in >> p.numtel;
	cout << "entrer adresse Email :" << endl;
	in >> p.adrsemail;

	return in;
}

ostream& operator>>(ostream& out, personne& p)
{

	out << "Cin :" << p.CIN << endl;
	out << "nom et prenom  :" << p.nom << endl;
	out << "sexe :" << p.gender << endl;
	cout << "numtel:" <<p.numtel<< endl;
	cout << " Email:" <<p.adrsemail<< endl;
	return out;
}
