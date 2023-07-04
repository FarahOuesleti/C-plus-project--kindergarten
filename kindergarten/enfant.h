#pragma once
#include <vector>
#include <fstream>
#include "personne.h"
#include "Activite.h"
using namespace std;

class Enfant : public personne
{
    int niveau;
    float montPay;
    vector <Activite*> act;
public:
    Enfant( int = 0, float = 250.0);
    ~Enfant()
    {
        for (int i = 0; i < act.size(); i++)
        {
            delete act[i];
        }

        act.clear();

        for (int i = 0; i < abs.size(); i++)
        {
            delete abs[i];
        }

        abs.clear();
    }


    Enfant(const Enfant& enf)

    {
        niveau = enf.niveau;
        montPay = enf.montPay;
         for (int i = 0; i < enf.act.size(); i++)
          {
              Activite* q = new Activite(*enf.act[i]);
              act.push_back(q);
          }

          for (int i = 0; i < enf.abs.size(); i++)
          {
              date* t = new date(*enf.abs[i]);
              abs.push_back(t);
          }
      
    }
    float payement(); 
    void AjoutAct(string );
    //void AjoutAbs(int, int, int); 
    void saisir();
    void afficher();
    void setmontPay(float montPay) { montPay = montPay; }
    void setniveau(int niveau) { niveau = niveau; }
    float getmontPay() { return montPay; }
    int getniveau() { return niveau; }
    static void creer(fstream&); 
    static void remplir(fstream&); 
    static void afficher(fstream&); 
    
        


};



