#include "italianchef.h"
#include <iostream>

italianchef::italianchef()
{
    cout << "Olen italiadefaultkonstruktorissa!" << endl;
}

italianchef::italianchef(string cN)
{
    cout << "Olen italiainputkonstruktorissa!" << endl;
    chefName = cN;
}

italianchef::~italianchef()
{
    cout << "Olen italiadefaultkonstruktorissa!" << endl;
}

bool italianchef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
    if (pw != password) return false;
    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();
    cout << "Saatiin tehtyä: " << numberOfPizzas << " pizzaa" << endl;
    return true;
}

int italianchef::makePizza()
{
    cout << "Tehdäänpä pizzaa!" << endl;
    cout << "Jauhoja on: " << flour << " ja vettä on: " << water << endl;
    int numberOfPizzas;
    int usedFlour=flour/5;
    int usedWater=water/5;
    numberOfPizzas=usedFlour+usedWater;
    cout << "Pizzoja tuli: " << numberOfPizzas << "kappaletta!" << endl;
    return numberOfPizzas;
}
