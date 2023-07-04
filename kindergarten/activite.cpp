#include "activite.h"

void Activite::saisirAct()
{
 
    cout << "saisir le nom de l'activite" << endl;
    cin >> nomAct;
}


void Activite::afficherAct()
{
    cout << "LIBELLE :\t" << nomAct << endl;

}
