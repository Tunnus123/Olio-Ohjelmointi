#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Pankkitili pt1;
    Pankkitili pt2("Pete");
    Luottotili lt1;
    Luottotili lt2("Make", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    double luettusaldo = pt2.getBalance();
    cout << "Peten luettu saldo: " << luettusaldo << endl;
    lt2.withdraw(100);
    lt2.deposit(50);
    luettusaldo = lt2.getBalance();
    cout << "Maken luettu saldo: " << luettusaldo << endl;

    return 0;
}
