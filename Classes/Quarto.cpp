#include "Quarto.h"

int Quarto::getID()
{
    return this->ID;
}
void Quarto::setID(int newID)
{
    this->ID = newID;
}

int Quarto::getNumero()
{
    return this->Numero;
}
void Quarto::setNumero(int newNumero)
{
    this->Numero = newNumero;
}

string Quarto::getEspecificacao()
{
    return this->Especificacao;
}
void Quarto::setEspecificacao(string newEspecificacao)
{
    this->Especificacao = newEspecificacao;
}

string Quarto::getStatus()
{
    return this->Status;
}
void Quarto::setStatus(string newStatus)
{
    this->Status = newStatus;
}

string Quarto::toStringQuarto()
{
    return "\nID: "+ to_string(this->ID) + "\nNumero: " + to_string(this->Numero) + "\nEspecificacao: " + this->Especificacao + "\nStatus: " + this->Status + "\n";
}