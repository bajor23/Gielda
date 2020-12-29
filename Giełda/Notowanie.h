#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Notowanie
{
public:
	Notowanie(string plikNotowania);
	string getSymbol();
	string getData();
	string getCzas();
	double getKursOtwarcia();
	double getKursNajwyzszy();
	double getKursNajnizszy();
	double getKursZamkniecia();
	double getWolumen();

private:
	string symbol;
	string data;
	string czas;
	double kursOtwarcia;
	double kursNajwyzszy;
	double kursNajnizszy;
	double kursZamkniecia;
	double wolumen;
};

