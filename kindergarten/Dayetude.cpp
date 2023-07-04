#include "Dayetude.h"


void Dayetude::saisirDay()
{
    Day::saisirDay();
    char choix;
    do
    {
        Activite* q = new Activite;
        q->saisirAct();
        emploi.push_back(q);
        cout << "rajouter ?" << endl;
        cin >> choix;
    }

    while ((choix == 'O') || (choix == 'o'));

}

void Dayetude::afficherDay()
{
    Day::afficherDay();
    cout << "***** Affichage des activites *****" << endl;
    for (int i = 0; i < emploi.size(); i++)
    {
        cout << "------- Activite " << i << "  -----" << endl;
        emploi[i]->afficherAct();
    }
}