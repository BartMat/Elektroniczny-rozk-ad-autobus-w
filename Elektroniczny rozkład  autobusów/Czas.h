#pragma once
#include <iostream>
using namespace std;
class Czas
{
	int godzina;
	int minuta;

public:
	Czas();
	Czas(int g, int m);
	~Czas();

	int get_g();
	int get_m();
	void set_g(int g);
	void set_m(int m);
	Czas operator-(Czas c);
	friend ostream& operator<<(ostream& os, const Czas& c);
	
};

