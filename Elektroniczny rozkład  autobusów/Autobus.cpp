#include "Autobus.h"

Autobus::Autobus()
{
	nr = 0;
}

Autobus::Autobus(int n, string k)
{
	nr = n;
	kierunek = k;
}



int Autobus::get_nr()
{
	return nr;
}

string Autobus::get_kier()
{
	return kierunek;
}

void Autobus::wypisz()
{
	cout << "Autobus nr: " << nr << "\tkierunek: " << kierunek;
}

ostream& operator<<(ostream& os, const Autobus& a)
{
	os << a.nr << " -> " << a.kierunek;
	return os;
}
