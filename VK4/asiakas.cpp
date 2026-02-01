#include "asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstruktorissa!" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    cout << "Asiakas: olen parametrikonstruktorissa!" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    cout << "Asiakas tilisiirto" << endl;
    double saldo1 = kayttotili.getBalance();

    if ((sum < 0) || (sum > saldo1)){
        return false;
    }

    kayttotili.withdraw(sum);
    kohde.kayttotili.deposit(sum);

    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
  return kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
   return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
   return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
   return luottotili.withdraw(sum);
}


