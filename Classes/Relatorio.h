#pragma once

#include <iostream>
#include <string>

using namespace std;

class Relatorio
{
    int ID;
    string dataInicio;
    string dataFinal;
    int quantidadeReservas;
    float renda;

public:
    int getID();
    void setID(int);

    string getDataInicio();
    void setDataInicio(string);

    string getDataFinal();
    void setDataFinal(string);

    int getQuantidadeReservas();
    void setQuantidadeReservas(int);

    float getRenda();
    void setRenda(float);

    string toStringRelatorio();
};