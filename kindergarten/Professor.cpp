#include "Professor.h"





Professor::Professor(string ch, int c, int tel, char g, string adress, float salaire, float pp) : Employe(ch, c, tel, g, adress, salaire), p(pp)
{
	
	cout << "const professor" << endl;
}





Professor::~Professor() { cout << "destr professeur" << endl; }




void Professor::creeprof(fstream& fprof)
{

    fprof.open("fichprof.txt", ios::in | ios::out | ios::app);
    if (!fprof.is_open())  exit(-1);

}



void Professor::remplirprof(fstream& fprof)
{
    Professor prof("sss" , 4444,5555,'h',"eeee",1200,0);
    char msg;
    do
    {
        cout << "\ saisir les informations de l'ouvrier :" << endl;
        prof.saisirp();
        fprof<< "    " << "------------------------------" << endl;
        fprof << "    " << "nom  et prenom :" << prof.getnom() << endl;
        fprof << "    " << "num Tel:" << prof.getnumtel() << endl;
        fprof << "    " << "sexe :" << prof.getgender() << endl;
        fprof << "    " << "adresse :" << prof.getadrsemail() << endl;
        fprof << "    " << "salaire :" << prof.getsalaire() << endl;
        for (int i = 0; i < prof.ListConge.size(); i++)
        {
            fprof << "  DEBUT :" << prof.ListConge[i] << endl;
            fprof << " FIN : " << prof.ListConge[i] << endl;
        }
        fprof<< "    " << "*************************************" << endl;
        cout << "rajouter plus  ?" << endl;
        cin >> msg;
    } while (msg == 'o' | msg == 'O');


}



void Professor::afficherprof(fstream& fprof)
{
    char ch[100];
    fprof.seekg(0);
    while (1)
    {
        fprof.getline(ch, 100);
        if (fprof.eof()) break;
        cout << ch << endl;
    }
}


/*float Professor::CalculSalaire(float p)

{
	return salaireEmp - abs.size() * p;
}*/