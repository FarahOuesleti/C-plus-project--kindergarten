#pragma once
#include<iostream>
using namespace std;
class date
{

	int j;
	int m;
	int a;
public:
	date(int = 1, int = 1, int = 2022);
	~date(void);
	void setj(int j) { this->j = j; }
	void setm(int m) { this->m = m; }
	void seta(int a) { this->a = a; }
	int getj() { return this->j; }
	int getm() { return this->m; }
	int geta() { return this->a; }
	void afficherdate();
	void saisir();

	bool comparerDate(date, date);



};
