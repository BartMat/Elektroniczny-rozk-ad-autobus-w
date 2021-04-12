#pragma once
#include <string>
#include<vector>
#include<map>
#include "Autobus.h"
#include "Czas.h"
using namespace std;

class Przystanek
{
	string nazwa;
	map <int, vector<Czas>> odjazdy;

public:
	Przystanek(const Przystanek&) = default;
	Przystanek();
	Przystanek(string n);
	void dodaj_odjazd(Autobus a,vector<Czas> v);
	void wypisz();
	string get_nazwa();
	friend ostream& operator<<(ostream& os, const Przystanek& p);
	
	friend  bool operator==(const Przystanek& lhs, const Przystanek& rhs);
	
	
};

