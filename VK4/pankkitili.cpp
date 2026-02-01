#include "pankkitili.h"
#include <iostream>
using namespace std;




Pankkitili::Pankkitili()
{
    cout << "Olen default konstruktorissa!" << endl;
}
Pankkitili::Pankkitili(string om)
{
    cout << "Olen Pankkitili: parametrikonstruktorissa!" << endl;
    omistaja = om;
}
double Pankkitili::getBalance()
{
    cout << "Olen saldokyselyssä!" << endl;
    return saldo;
}
bool Pankkitili::deposit(double sum)
{
    cout << "Olen Pankkitili: talletuksessa!" << endl;
    if (sum < 0) return false;
    saldo += sum;
    return true;
}
bool Pankkitili::withdraw(double sum)
{
    cout << "Olen Pankkitili: nostossa!" << endl;
    if ( (sum < 0) || ( (saldo - sum) < 0) ) return false;
    saldo -= sum;
    return true;
}
