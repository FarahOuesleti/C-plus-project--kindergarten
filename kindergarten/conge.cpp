#include "conge.h"
#include<stdio.h>
using namespace std;


conge::conge(date d, date f)
{

    int jj, mm, aa;
    while ((d.geta() != f.geta())
        || ((f.geta() != d.geta() + 1) || (f.getm() != 1) || (d.getm() != 12))
        || ((d.getm() != f.getm()) || (d.getm() + 1 != f.getm())))
    {
        cout << " Veuillez resaisir des dates de conge de duree ne depassant pas un mois " << endl;
        cout << " Date debut Conge : jj/mm/aa" << endl;
        cin >> jj >> mm >> aa;
        date d(jj, mm, aa);
        cout << " Date fin Conge : jj/mm/aa" << endl;
        cin >> jj >> mm >> aa;
        date f(jj, mm, aa);
    }
    debutCong = d;
    finCong = f;

}


conge::~conge()
{

}


void conge::afficherConge()
{
    cout << "START: " << endl; 
    debutCong.afficherdate(); 
    cout << "END: " << endl;
    finCong.afficherdate(); 
}

