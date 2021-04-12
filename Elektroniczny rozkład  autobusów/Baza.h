#pragma once
#include "Autobus.h"
#include "Przystanek.h"
#include "Trasa.h"
#include <fstream>
using namespace std;

class Baza: public Trasa
{
	vector<Autobus> autobusy;
	vector<Przystanek> przystanki;
	vector<Trasa> trasy;

public:
	Baza();
	void dodaj_autobus(Autobus a);
	void dodaj_przystanek(Przystanek p);
	void dodaj_trase(Trasa t);

};

