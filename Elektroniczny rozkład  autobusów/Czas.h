#pragma once
#include <iostream>
#include <string>
using namespace std;
class Czas
{
	int godzina;
	int minuta;

public:
	Czas();
	Czas(string czasStr);
	~Czas();

	int get_g();
	int get_m();
	void set_g(int g);
	void set_m(int m);
	Czas operator-(Czas c);
	friend ostream& operator<<(ostream& os, const Czas& c);
	
};

