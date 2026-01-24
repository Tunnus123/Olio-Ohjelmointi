#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"
using namespace std;

class italianchef : public Chef
{
public:
    italianchef();
    italianchef(string);
    ~italianchef();
    bool askSecret(string, int, int);
private:
    int water;
    int flour;
    string password = "pizza";
    int makePizza();
};

#endif // ITALIANCHEF_H
