#pragma once
#include "enfant.h"



Enfant:: Enfant(  int n , float mon ) :  niveau(n), montPay(mon)
{   


}



void Enfant::AjoutAct(string n )
{
    Activite* q = new Activite(n);
    act.push_back(q); 
    
}

/*void Enfant::AjoutAbs(int j, int m, int a)
{
    date* q = new date(j,m,a);
    abs.push_back(q);

}*/



void Enfant::saisir()
{
   
    char choix;
    personne::saisir(); 
    cout << " veuillez saisir votre  niveau : \n " << endl;
    cin >> niveau;
    cout << "veuillez choisir vos activites : \n " << endl; 
    cout << " 1-danse \n" << endl; 
    cout << " 2-peinture \n " << endl; 
    cout << " 3-theatre\n" << endl; 
    cout << " 4-musique\n" << endl;
    do
    {
        Activite* q = new Activite;
        q->saisirAct();
        act.push_back(q);
        cout << "Rajoutez ?" << endl;
        cin >> choix;

    } while (choix == 'o' || choix == 'O');
   
    

}
float Enfant::payement()
{
    if (niveau == 3 || niveau == 4)
    {
        cout << "le montant est fixe a 250 dt\n " << endl;
        getmontPay(); 

    }
    else

    {
        montPay = montPay + 50;
        setmontPay(montPay);
    }
    return montPay; 
}




void Enfant::afficher()
{

    personne::afficher();
    cout << " niveau :  " << niveau <<"\n" <<endl;
    cout << " montant a payer  :  " << montPay <<"\n"<< endl;
    cout << " Activites : \t" << endl; 
    for (int i = 0;i < act.size(); i++)
    {
        act[i]->afficherAct(); 
        cout << "---------------" << endl;
    }
   
}

  void Enfant:: creer(fstream& fe)
  {
    
      fe.open("fichenfant.txt", ios::in | ios::out | ios::app); 
      if (!fe.is_open())  exit(-1); 

}

void Enfant::remplir(fstream& fe )
{
    Enfant enf;
    char msg; 
    do
    {
        cout << "\ saisir les informations de l'enfant :" << endl; 
        enf.saisir(); 
  
        fe << "    " << "------------------------------"<< endl;
        fe<< "    " <<  "nom  et  prenom :" << enf.getnom() << endl;
        fe << "    " << "num Tel:" << enf.getnumtel() << endl;
        fe << "    " << "sexe :" << enf.getgender() << endl;
        fe << "    " << "adresse :" << enf.getadrsemail() << endl;  
        fe << "    " << "niveau :" << enf.getniveau() << endl;
        fe << "    " << "activite: " << endl;
        for(int i=0 ; i<enf.act.size() ; i++)
        {
            fe << "    " << enf.act[i]->getNomAct() <<"\t"<< endl;
        }
        fe << "    " << "montant a payer :" << enf.payement() << endl;
        fe << "    " << "*******************************" << endl;
        cout << "rajouter plus d'enfants  ?" << endl; 
        cin >> msg; 
    } while (msg == 'o' | msg == 'O'); 


}



void Enfant:: afficher(fstream&fe)
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
