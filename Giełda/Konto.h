#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "Notowanie.h"

using namespace std;

class Konto
{
public:
	Konto(string nazwaUzytkownika, double poczatkowyStanKonta);
	double getStanKonta();
	double getStanKontaWInwestycjach();
	string getNazwaUzytkownika();
	void setNazwaUzytkownika(string nazwaUzytkonika);
	void zapiszDoPliku();
	void kupAkcje(Notowanie spolka, int ilosc);
	struct akcje
	{
		Notowanie spolka;
		int ilosæ;
	};
	vector <akcje> mojeAkcje;
private:
	string nazwaUzytkownika;
	double stanKonta;
	double stanKontaWInwestycjach;

	
};