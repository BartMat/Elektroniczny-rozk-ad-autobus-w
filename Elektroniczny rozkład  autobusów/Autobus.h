#pragma once
#include <string>
#include <iostream>
using namespace std;

class Autobus
{
protected:
	int nr;
	string kierunek;

public:
	Autobus();
	Autobus(int n, string k);
	friend ostream& operator<<(ostream& os, const Autobus& a);
	int get_nr();
	string get_kier();
};

