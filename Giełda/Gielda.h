#pragma once
#include <tchar.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

class Gielda
{
public:
	Gielda();//konstruktor pobiera kursy "wig20"
	Konto* getUzytkownik();
	void setUzytkownik(Konto &uzytkownik);
	void zapiszDoPliku();

private:
	Konto* uzytkownik = NULL;
};

