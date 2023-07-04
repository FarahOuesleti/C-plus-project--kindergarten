#pragma once
using namespace std;
#include<iostream>
#include<string>
#include<fstream>

class Evenement
{
	string eventName;
	string description;
public:
	Evenement(string = "");
	~Evenement() {};
	void afficheEvent();
	void creerevent(fstream&);
	void remplirevent(fstream&);
	void afficherevent(fstream&);
};


