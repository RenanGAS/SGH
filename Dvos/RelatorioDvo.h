#pragma once

#include <string>
#include "../Daos/ReservaDao.h"
using namespace std;


typedef struct DATA{
    int dia;
    int mes;
    int ano;
} DATA;

class RelatorioDvo
{
    ReservaDao *reservaDao1 = new ReservaDao();
    Reserva **reservas = reservaDao1->list();
    DATA *stringToData(string strData);
    bool verificarDataInicio(string dataInicio);
    bool verificarDataFinal(string dataFinal);
    
public:
    bool verificarPeriodo(string dataInicio, string dataFinal);
};