#include "Notowanie.h"
#include <iostream>
using namespace std;

Notowanie::Notowanie(string plikNotowania)
{
	ifstream plik(plikNotowania);
	//mozna zalapac blad is_open() tylko gdzie go wyzucic?
	string linia, zmienna;
	getline(plik, linia);
	getline(plik, linia);
	stringstream ss(linia);
	plik.close();
	vector <string> zmienne;
	while (getline(ss, zmienna, ','))
		zmienne.push_back({ zmienna });
	this->symbol = zmienne[0];
	this->data = zmienne[1];
	this->czas = zmienne[2];
	this->kursOtwarcia = stod(zmienne[3]);
	this->kursNajwyzszy = stod(zmienne[4]);
	this->kursNajnizszy = stod(zmienne[5]);
	this->kursZamkniecia = stod(zmienne[6]);
	this->wolumen = stod(zmienne[7]);
}

string Notowanie::getSymbol()
{
	return symbol;
}

string Notowanie::getData()
{
	return data;
}

string Notowanie::getCzas()
{
	return czas;
}

double Notowanie::getKursOtwarcia()
{
	return kursOtwarcia;
}

double Notowanie::getKursNajwyzszy()
{
	return kursNajwyzszy;
}

double Notowanie::getKursNajnizszy()
{
	return kursNajnizszy;
}

double Notowanie::getKursZamkniecia()
{
	return kursZamkniecia;
}

double Notowanie::getWolumen()
{
	return wolumen;
}


