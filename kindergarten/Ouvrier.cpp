#include "Ouvrier.h"




Ouvrier::Ouvrier(string ch, int c, int tel, char g, string adress, float salaire, float pp) :Employe(ch, c, tel, g, adress, salaire), p(pp)
{

	cout << "const ouvrier" << endl;
}



void Ouvrier::creerouv(fstream& fouv)
{

    fouv.open("fichouvrier.txt", ios::in | ios::out | ios::app);
    if (!fouv.is_open())  exit(-1);

}


void Ouvrier::remplirouv(fstream& fouv)
{    
    Ouvrier ouv  ;
    char msg;
    do
    {
        cout << "\ saisir les informations de l'ouvrier :" << endl;
        ouv.saisirp();
        fouv << "    " << "------------------------------------" << endl;
        fouv << "    " << "nom  et prenom :" << ouv.getnom() << endl;
        fouv << "    " << "num Tel:" << ouv.getnumtel() << endl;
        fouv << "    " << "sexe :" << ouv.getgender() << endl;
        fouv << "    " << "adresse :" << ouv.getadrsemail() << endl;
        fouv<< "    " << "salaire :" << ouv.getsalaire() << endl;
        fouv << "    " << "Conge :" <<  endl;
        for (int i = 0; i < ouv.ListConge.size(); i++)
        {
            fouv << "  DEBUT :" << ouv.ListConge[i]<< endl ;
            fouv << " FIN : " << ouv.ListConge[i]<< endl; 
        }
        fouv << "    " << "salaire :" << ouv.getsalaire() << endl;
        fouv<< "    " << "*************************************" << endl;
        cout << "rajouter plus  ?" << endl;
        cin >> msg;
    } while (msg == 'o' | msg == 'O') ;


}




void Ouvrier::afficherouv(fstream& fouv)
{
    char ch[100];
    fouv.seekg(0);
    while (1)
    {
        fouv.getline(ch, 100);
        if (fouv.eof()) break;
        cout << ch << endl;
    }
}

/*
float Ouvrier::CalculSalaire(float p) {

	//return salaireEmp - abs.size() * p;
};
*/

/*float Ouvrier::CalculSalaire(float p)
{
    for (int i = 0; i < abs.size(); i++)
    {
        if (abs[i].comparerDate(debutCong, finCong) == false)
            salaire -= salaire * p;
        else continue;
    }
}*/