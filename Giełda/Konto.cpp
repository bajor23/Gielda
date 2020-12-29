#include "Konto.h"

Konto::Konto(string nazwaUzytkownika, double poczatkowyStanKonta)
{
	this->nazwaUzytkownika = nazwaUzytkownika;
	stanKonta = poczatkowyStanKonta;
}

double Konto::getStanKonta()
{
	return stanKonta;
}

double Konto::getStanKontaWInwestycjach()
{
	return stanKontaWInwestycjach;
}

string Konto::getNazwaUzytkownika()
{
	return nazwaUzytkownika;
}

void Konto::setNazwaUzytkownika(string nazwaUzytkownika)
{
	this->nazwaUzytkownika = nazwaUzytkownika;
}

void Konto::zapiszDoPliku() //wersja robocza
{
	ofstream plik(nazwaUzytkownika.c_str());
	plik << stanKonta;
	plik.close();
}

void Konto::kupAkcje(string symbolAkcji, int ilosc)
{
}
