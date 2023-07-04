#include "DayVac.h"
#pragma once
#include "Day.h"
#include "evenement.h"
#include <iostream>
#include <string>

using namespace std;


void DayVac::afficherDay()
{
    Day::afficherDay();
    event.afficheEvent();

}


void saisirDay()
{

}
//void initProg();
