#pragma once

#include "../Classes/Reserva.h"
#include <string>
using namespace std;

#define MAX_RESERVAS 10

class ReservaDao
{
    Reserva *reservas[MAX_RESERVAS];
    int reservasCount = 0;

public:
    bool create(Reserva &);
    Reserva *retrieve(int);
    bool update(Reserva &);
    bool update(Reserva &, float);
    bool update(Reserva &, string);
    bool delete_(Reserva &);
    Reserva **list();
};