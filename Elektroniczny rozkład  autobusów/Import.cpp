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

		for (int i = 0; i < 5; i++)
		{
			for (json::iterator it = j.begin(); it != it+t[i]; ++it)
			{
				jtab.push_back(*it);
			}
		}

		thread t1;
		thread t2;
		thread t3;
		thread t4;
		thread t5;

		t1.join();
		t2.join();
		t3.join();
		t4.join();
		t5.join();

		for (const auto& x : j)
		{
			std::cout << x["autobus"] << " -> " << x["przystanki"]["przystanek2"].size() << std::endl;

		}


	}

	catch (const ifstream::failure& e) {
		cout << "Exception opening/reading file";
	}
}
