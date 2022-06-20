#pragma once

#include <string>
#include "../Mgrs/MgrReserva.h"
using namespace std;

typedef struct DATA
{
    int dia;
    int mes;
    int ano;
} DATA;

class RelatorioDvo
{
    MgrReserva *mgrReserva1 = new MgrReserva();
    Reserva **reservas = mgrReserva1->getListaReservas();

    DATA *stringToData(string strData);
    bool verificarDataInicio(string dataInicio);
    bool verificarDataFinal(string dataFinal);

public:
    Reserva **reservasValidas;
    int countReservasV;
    bool verificarPeriodo(string dataInicio, string dataFinal);
};