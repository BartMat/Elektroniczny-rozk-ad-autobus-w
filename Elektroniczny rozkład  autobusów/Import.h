#pragma once
#include <string>
#include "Autobus.h"
#include "Baza.h"
#include "Przystanek.h"
#include "Trasa.h"
#include "json.hpp"
#include <fstream>
#include <thread>

using namespace std;
using json = nlohmann::json;

class Import
{
	string plik;

public:
	Import();
	Import(string s);
	void wczytaj(Baza& baza);
};

