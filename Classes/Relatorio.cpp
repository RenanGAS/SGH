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

int Relatorio::getQuantidadeReservas()
{
    return this->quantidadeReservas;
}
void Relatorio::setQuantidadeReservas(int newQuantidadeReservas)
{
    this->quantidadeReservas = newQuantidadeReservas;
}

float Relatorio::getRenda()
{
    return this->renda;
}
void Relatorio::setRenda(float newRenda)
{
    this->renda = newRenda;
}

string Relatorio::toStringRelatorio()
{
    return "\nID: "+ to_string(this->ID) + "\nData Inicial: " + this->dataInicio + "\nData Final: " + this->dataFinal + "\nNumero de reservas: " + to_string(this->quantidadeReservas) + "\nRenda: " + to_string(this->renda) + "\n";
}