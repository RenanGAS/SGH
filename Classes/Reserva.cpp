#include "Reserva.h"

int Reserva::getID()
{
    return this->ID;
}
void Reserva::setID(int newID)
{
    this->ID = newID;
}

int Reserva::getCliente()
{
    return this->cliente;
}
void Reserva::setCliente(int newCliente) 
{
    this->cliente = newCliente;
}

string Reserva::getEspecificacao() // TODO: Terminar de refatorar
{
    return this->Especificacao;
}
void Reserva::setEspecificacao(string newEspecificacao)
{
    this->Especificacao = newEspecificacao;
}

string Reserva::getStatus()
{
    return this->Status;
}
void Reserva::setStatus(string newStatus)
{
    this->Status = newStatus;
}

string Reserva::toStringReserva()
{
    return "\nID: "+ to_string(this->ID) + "\nCliente: " + this->cliente->getNome() + "\nEspecificacao: " + this->Especificacao + "\nStatus: " + this->Status + "\n";
}