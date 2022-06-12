#include "Cliente.h"

int Cliente::getID()
{
    return this->ID;
}
void Cliente::setID(int newID)
{
    this->ID = newID;
}

string Cliente::getNome()
{
    return this->Nome;
}
void Cliente::setNome(string newNome)
{
    this->Nome = newNome;
}

string Cliente::getCpf()
{
    return this->CPF;
}
void Cliente::setCpf(string newCpf)
{
    this->CPF = newCpf;
}

string Cliente::getTel()
{
    return this->Telefone;
}
void Cliente::setTel(string newTel)
{
    this->Telefone = newTel;
}

static string intToString(int integer)
{
    return to_string(integer);
}

string Cliente::toStringCliente()
{
    return "\nID: "+ intToString(this->ID) + "\nNome: " + this->Nome + "\nCPF: " + this->CPF + "\nTelefone: " + this->Telefone + "\n";
}