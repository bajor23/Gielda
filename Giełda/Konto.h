#pragma once

#include <string>
#include <iostream>
#include <fstream>

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
	void kupAkcje(string symbolAkcji, int ilosc);
private:
	string nazwaUzytkownika;
	double stanKonta;
	double stanKontaWInwestycjach;




	int posiadaneAkcje[20];




};