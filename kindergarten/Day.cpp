#include "Day.h"


void Day::saisirDay()
{
    cout << " Entrez le jour et le numero du mois" << endl;
    cin >> numJour >> numMois;
}



void Day::afficherDay()
{
    cout << numJour;

    switch (numMois)
    {
    case 1:
        cout << "Janvier" << endl;
        break;
    case 2:
        cout << "Février" << endl;
        break;
    case 3:
        cout << "Mars" << endl;
        break;
    case 4:
        cout << "Avril" << endl;
        break;
    case 5:
        cout << "Mai" << endl;
        break;
    case 6:
        cout << "Juin" << endl;
        break;
    case 7:
        cout << "Juillet" << endl;
        break;
    case 8:
        cout << "Aout" << endl;
        break;
    case 9:
        cout << "Septembre" << endl;
        break;
    case 10:
        cout << "Octobre" << endl;
        break;
    case 11:
        cout << "Novembre" << endl;
        break;
    case 12:
        cout << "Decembre" << endl;
        break;

    }
}



