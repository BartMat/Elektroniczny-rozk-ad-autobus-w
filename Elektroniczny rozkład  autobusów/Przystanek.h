#pragma once
#include <string>
#include<vector>
#include<map>
#include "Autobus.h"
#include "Czas.h"
using namespace std;

class Przystanek
{
	int id;
	string nazwa;
	map <int, vector<Czas>> odjazdy;

public:
	Przystanek();
	Przystanek(int i, string n);
	void dodaj_odjazd(Autobus a,vector<Czas> v);
	void wypisz();
	friend ostream& operator<<(ostream& os, const Przystanek& p);
	
};

