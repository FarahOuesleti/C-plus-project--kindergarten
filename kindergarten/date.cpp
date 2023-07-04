#include "date.h"



date::date(int jour, int mois, int annee)
{
	this->j = jour;
	this->m = mois;
	this->a = annee;

}


date::~date()
{

}



void date::afficherdate()
{
	cout << j << "/" << m << "/" << a << endl;



}
void date::saisir()
{

	cin >> j >> m >> a;


}
bool date::comparerDate(date d1, date d2)
{
	//conge maternite : si sexe = 'f'
	if ((d2.geta() == d1.geta() + 1) && (d2.getm() == 1) && (d1.getm() == 12))
		if (((a == d1.geta()) && (m == 12) && (j >= d1.getj())) || ((a == d2.geta()) && (m == 1) && (j <= d1.getj())))
			return true;

	if ((d2.getm() == d1.getm()) && (((j >= d1.getj()) && (j <= d2.getj())))) return true;
	else if (((m == d1.getm()) && (j >= d1.getj())) || ((m == d2.getm()) && (j <= d2.getj()))) return true;

	return false;
}