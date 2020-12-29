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

void Konto::kupAkcje(Notowanie spolka, int ilosc)
{
	double wartoscAkcji = spolka.getKursZamkniecia() * ilosc;
	if (wartoscAkcji > stanKonta) //wyjscie gdy brak kasy
		return;
	mojeAkcje.push_back({spolka, ilosc}); //dodadnie info o zakupionych akcjach (trzba dopisac warunek sprawdzajacy czy juz czasem nie ma 
	stanKonta -= wartoscAkcji; //obnizenie stanu konta  
	stanKontaWInwestycjach += wartoscAkcji; //dodadnie do inwestycji
	
}
