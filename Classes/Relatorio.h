#pragma once

#include <iostream>
#include <string>

#include "../Mgrs/MgrReserva.h"

using namespace std;


class Relatorio
{
    int ID;
    string dataInicio;
    string dataFinal;
    int quantidadeReservas;
    float renda;
    Reserva* reservas[MAX_RESERVAS];

    int calcularReservas();
    int calcularRenda();

public:
    int getID();
    void setID(int);

    string getDataInicio();
    void setDataInicio(string);

    string getDataFinal();
    void setDataFinal(string);

    int getQuantidadeReservas();

    float getRenda();
};