#pragma once

#include <iostream>
#include <string>

using namespace std;

class Relatorio
{
    int ID;
    string dataInicio;
    string dataFinal;

public:
    int getID();
    void setID(int);

    string getDataInicio();
    void setDataInicio(string);

    string getDataFinal();
    void setDataFinal(string);
};