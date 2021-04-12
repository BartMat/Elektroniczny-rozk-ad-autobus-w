#pragma once
#include "Autobus.h"
#include "Przystanek.h"
#include <vector>
using namespace std;

class Trasa: public Przystanek, protected Autobus
{
	vector<Przystanek> przystanki;

public:
	Trasa();
	Trasa(int n, string k);
	void dodajPrzystanek(Przystanek przystanek);
	void wypisz();
};

