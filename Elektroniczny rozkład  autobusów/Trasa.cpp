#include "Trasa.h"

Trasa::Trasa()
{
}

Trasa::Trasa(int n, string k, vector<Przystanek> p):Autobus(n, k)
{
	
	przystanki = p;
}


void Trasa::wypisz()
{
	cout << "Trasa nr " << this->nr<<" do "<< this->kierunek<<endl;
	for (vector<Przystanek>::const_iterator itr = przystanki.begin(); itr != przystanki.end(); ++itr)
	{
		cout << "\t" << *itr << "\n";
	}
}
