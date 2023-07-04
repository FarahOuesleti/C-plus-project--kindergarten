#pragma once
#include"date.h"

class date;
class conge
{
	date debutCong;
	date finCong;
public:
	conge(date = date(0, 0, 0), date = date(0, 5, 0));
	~conge();
	date getdebutconge() { return debutCong;  }
	date getfinconge() { return finCong; }
	void afficherConge();
};

