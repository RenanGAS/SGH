#pragma once

#include "../Classes/Quarto.h"
#include <string>
using namespace std;

#define MAX_QUARTOS 10

class QuartoDao
{
    Quarto *quartos[MAX_QUARTOS];
    int quartosCount = 0;

public:
    bool create(Quarto &);
    Quarto *retrieve(int);
    bool update(Quarto &);
    bool delete_(Quarto &);
    Quarto **list();
};