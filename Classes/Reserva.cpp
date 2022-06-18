#include "Reserva.h"

int Reserva::getID()
{
    return this->ID;
}
void Reserva::setID(int newID)
{
    this->ID = newID;
}

Cliente *Reserva::getCliente()
{
    return this->cliente;
}
void Reserva::setCliente(Cliente *newCliente) 
{
    this->cliente = newCliente;
}

Quarto *Reserva::getQuarto()
{
    return this->quarto;
}
void Reserva::setQuarto(Quarto *newQuarto)
{
    this->quarto = newQuarto;
}

string Reserva::getDataEntrada()
{
    return this->dataEntrada;
}
void Reserva::setDataEntrada(string newDataEntrada)
{
    this->dataEntrada = newDataEntrada;
}

string Reserva::getDataSaida()
{
    return this->dataSaida;
}
void Reserva::setDataSaida(string newDataSaida)
{
    this->dataSaida = newDataSaida;
}

int Reserva::getNumeroPessoas()
{
    return this->numeroPessoas;
}
void Reserva::setNumeroPessoas(int newNumeroPessoas)
{
    this->numeroPessoas = newNumeroPessoas;
}

float Reserva::getValorAPagar()
{
    return this->valorAPagar;
}
void Reserva::setValorAPagar(float newValorAPagar)
{
    this->valorAPagar = newValorAPagar;
}

string Reserva::toStringReserva()
{
    return "\nID: "+ to_string(this->ID) + "\nCliente: " + this->cliente->getNome() + "\nQuarto: " + to_string(this->quarto->getNumero()) + "\nNumero de pessoas: "+ to_string(this->numeroPessoas) + "\nData de entrada: " + this->dataEntrada + + "\nData de saida: " + this->dataSaida + "\nValor a pagar: "+ to_string(this->valorAPagar) + "\n";
}