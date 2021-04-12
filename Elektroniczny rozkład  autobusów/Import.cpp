#include "Import.h"

Import::Import()
{
}

Import::Import(string s)
{
	plik = s;
}

void Import::wczytaj(Baza& baza)
{
	try
	{
		//wczytanie pliku
		ifstream input(plik);
		json j;
		input >> j;
		input.close();

		//dzielenie pliku na czêœci ¿eby pracowaæ na nim w wielu w¹tkach
		int ile_a = j.size() / 5;
		int t[5] = { ile_a, ile_a, ile_a, ile_a, ile_a };
		int reszta = j.size() % 5;

		for (int i = 0; i < reszta; i++)
		{
			t[i]++;
		}

		vector<json> jtab; //vector z czêœciami pliku

	/*	for (int i = 0; i < 5; i++)
		{
			for (json::iterator it = j.begin(); it != it+t[i]-1; ++it)
			{
				jtab.push_back(*it);
			}
		}*/
		
		/*thread t1(&Import::konstruuj_baze, baza, jtab[0]);
		thread t2(&Import::konstruuj_baze, baza, jtab[1]);
		thread t3(&Import::konstruuj_baze, baza, jtab[2]);
		thread t4(&Import::konstruuj_baze, baza, jtab[3]);
		thread t5(&Import::konstruuj_baze, baza, jtab[4]);

		t1.join();
		t2.join();
		t3.join();
		t4.join();
		t5.join();*/

	}

	catch (const ifstream::failure& e) {
		cout << "Exception opening/reading file";
	}
}

void Import::konstruuj_baze(Baza& baza, json j)
{
	
	for (const auto& autobusElem : j)
	{
		
		Autobus autobus(autobusElem["autobus"], autobusElem["kierunek"]);
		Trasa trasa(autobus.get_nr(), autobus.get_kier());

		const auto& przystankiElem = autobusElem["przystanki"];

		for (auto it = przystankiElem.begin(); it != przystankiElem.end(); ++it)
		{
			vector<Czas> vecCzas;
			
			auto it2 = find(baza.get_przystanki().begin(), baza.get_przystanki().end(), it.key());
			if (it2 != baza.get_przystanki().end())
			{
			
				for (const auto& czasElem : it.value())
				{
					Czas czas(czasElem);
					vecCzas.push_back(czas);
				}
				Przystanek p = *it2;
				p.dodaj_odjazd(autobus, vecCzas);
			}
			else
			{
				Przystanek przystanek(it.key());
				for (const auto& czasElem : it.value())
				{
					Czas czas(czasElem);
					vecCzas.push_back(czas);
				}
				przystanek.dodaj_odjazd(autobus, vecCzas);
				baza.dodaj_przystanek(przystanek);
				trasa.dodajPrzystanek(przystanek);
			}
		}
		baza.dodaj_autobus(autobus);
		baza.dodaj_trase(trasa);
	}
}
