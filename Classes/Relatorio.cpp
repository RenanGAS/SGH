#include "Relatorio.h"

int Relatorio::getID()
{
    return this->ID;
}
void Relatorio::setID(int newID)
{
    this->ID = newID;
}

string Relatorio::getDataInicio()
{
    return this->dataInicio;
}
void Relatorio::setDataInicio(string newDataInicio)
{
    this->dataInicio = newDataInicio;
}

string Relatorio::getDataFinal()
{
    return this->dataFinal;
}
void Relatorio::setDataFinal(string newDataFinal)
{
    this->dataFinal = newDataFinal;
}