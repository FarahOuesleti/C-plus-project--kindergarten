#include "salle_admin.h"

salle_admin::salle_admin(int a) : code_salle(a)
{


}



salle_admin::~salle_admin()
{

}


void salle_admin::afficher_salle()
{
	salle::afficher_salle();
	cout << "\n code salle : " << code_salle << endl;

}
