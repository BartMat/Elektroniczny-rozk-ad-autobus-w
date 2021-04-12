#include "Przystanek.h"

Przystanek::Przystanek()
{

}

Przystanek::Przystanek(string n)
{
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

string Przystanek::get_nazwa()
{
	return nazwa;
}



ostream& operator<<(ostream& os, const Przystanek& p)
{
	os << p.nazwa;
	return os;
}

bool operator==(const Przystanek& lhs, const Przystanek& rhs)
{
	if(lhs.nazwa==rhs.nazwa)
	{
		return true;
	}
	return false;
}
