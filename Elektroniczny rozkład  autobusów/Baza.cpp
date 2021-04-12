#include "Baza.h"

Baza::Baza()
{
}

Baza::~Baza()
{
}

void Baza::dodaj_autobus(Autobus a)
{
	autobusy.push_back(a);
}

void Baza::dodaj_przystanek(Przystanek p)
{
	przystanki.push_back(p);
}

void Baza::dodaj_trase(Trasa t)
{
	trasy.push_back(t);
}

vector<Autobus> Baza::get_autobusy() const
{
	return autobusy;
}

vector<Przystanek> Baza::get_przystanki() const
{
	return przystanki;
}

vector<Trasa> Baza::get_trasy() const
{
	return trasy;
}

Przystanek* Baza::szukaj_przystanek(string s)
{
	for (auto przystanek : przystanki)
	{
		if(przystanek.get_nazwa()==s)
		{
			return &przystanek;
		}
	}
	return nullptr;
}

