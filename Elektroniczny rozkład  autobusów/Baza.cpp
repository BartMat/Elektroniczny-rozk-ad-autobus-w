#include "Baza.h"

Baza::Baza()
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
