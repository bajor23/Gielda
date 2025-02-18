#include <iostream>
#include "Konto.h"
#include "Notowanie.h"
#include "Gielda.h"

using namespace std;

Gielda::Gielda()
{   //pobranie danych i zapis do pliku
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=ale&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\alr.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=alr&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\ale.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=ccc&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\acp.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=cdr&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\ccc.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=cps&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\cdr.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=dnp&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\cps.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=jsw&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\dnp.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=kgh&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\jsw.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=lpp&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\kgh.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=lts&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\lts.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=opl&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\lpp.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=peo&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\opl.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=pge&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\peo.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=pgn&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\pge.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=pkn&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\pgn.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=pko&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\pkn.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=ply&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\pko.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=pzu&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\pzu.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=spl&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\spl.csv"), 0, NULL);
    URLDownloadToFile(NULL, _T("https://stooq.pl/q/l/?s=tpe&f=sd2t2ohlcv&h&e=csv"), _T("notowania\\tpe.csv"), 0, NULL);
}

Konto* Gielda::getUzytkownik()
{
    return uzytkownik;
}

void Gielda::setUzytkownik(Konto &uzytkownik)
{
    this->uzytkownik = &uzytkownik;
}

void Gielda::zapiszDoPliku()
{
    ofstream plik("ustawienia.txt");
    plik << uzytkownik;
    plik.close();
}

int main()
{
    Gielda gielda = Gielda();

    //utworzenie obiektow
    Notowanie ale = Notowanie("notowania\\alr.csv");
    Notowanie alr = Notowanie("notowania\\ale.csv");
    Notowanie ccc = Notowanie("notowania\\acp.csv");
    Notowanie cdr = Notowanie("notowania\\ccc.csv");
    Notowanie cps = Notowanie("notowania\\cdr.csv");
    Notowanie dnp = Notowanie("notowania\\cps.csv");
    Notowanie jsw = Notowanie("notowania\\dnp.csv");
    Notowanie kgh = Notowanie("notowania\\jsw.csv");
    Notowanie lpp = Notowanie("notowania\\kgh.csv");
    Notowanie lts = Notowanie("notowania\\lts.csv");
    Notowanie opl = Notowanie("notowania\\lpp.csv");
    Notowanie peo = Notowanie("notowania\\opl.csv");
    Notowanie pge = Notowanie("notowania\\peo.csv");
    Notowanie pgn = Notowanie("notowania\\pge.csv");
    Notowanie pkn = Notowanie("notowania\\pgn.csv");
    Notowanie pko = Notowanie("notowania\\pkn.csv");
    Notowanie ply = Notowanie("notowania\\pko.csv");
    Notowanie pzu = Notowanie("notowania\\pzu.csv");
    Notowanie spl = Notowanie("notowania\\spl.csv");
    Notowanie tpe = Notowanie("notowania\\tpe.csv");
    
    Konto bajor = Konto("bajor", 10000);

    gielda.setUzytkownik(bajor);

    cout << "aktualny uzytkownik to: " << gielda.getUzytkownik()->getNazwaUzytkownika() << endl;
    
    cout << "stan konta: " << gielda.getUzytkownik()->getStanKonta() << endl; //cout << bajor.getStanKonta() << endl;
    cout << "stan konta (inwestycje): " << gielda.getUzytkownik()->getStanKontaWInwestycjach() << endl;
    
    gielda.getUzytkownik()->kupAkcje(pzu, 3);
    

    cout << "stan konta: " << gielda.getUzytkownik()->getStanKonta() << endl; //cout << bajor.getStanKonta() << endl;
    cout << "stan konta (inwestycje): " << gielda.getUzytkownik()->getStanKontaWInwestycjach() << endl;

    gielda.getUzytkownik()->zapiszDoPliku();

    
    cout << gielda.getUzytkownik()->mojeAkcje[0].spolka.getSymbol() << " = " << gielda.getUzytkownik()->mojeAkcje[0].ilosc << endl;

    
}
