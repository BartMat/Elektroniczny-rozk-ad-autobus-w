#include "Przystanek.h"

Przystanek::Przystanek()
{
	id = 0;
}

Przystanek::Przystanek(int i, string n)
{
	id = i;
	nazwa = n;
}

void Przystanek::dodaj_odjazd(Autobus a, vector<Czas> v)
{
	odjazdy.insert(pair<int,vector<Czas>>(a.get_nr(), v));
}

void Przystanek::wypisz()
{
	for (auto itr = odjazdy.begin(); itr != odjazdy.end(); ++itr) 
	{
		cout << itr->first << "\t";
		
		for (vector<Czas>::const_iterator itr2 = itr->second.begin(); itr2 != itr->second.end(); ++itr2)
		{
			cout << "\t" << *itr2 << "\n\t";
		}
		cout << endl;
	}
}

ostream& operator<<(ostream& os, const Przystanek& p)
{
	os << p.nazwa;
	return os;
}
