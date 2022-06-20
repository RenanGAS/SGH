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
    //pra não permitir que mudem pra um CPF nulo
    if (newCpf[0] == '\0') return;
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

string Cliente::toStringCliente()
{
    /*
    Ex: ID: 1
    Nome: João
    CPF: 123.456.789-00
    Telefone: (11) 9 9999-9999
    */
    return "\nID: "+ to_string(this->ID) + "\nNome: " + this->Nome + "\nCPF: " + this->CPF + "\nTelefone: " + this->Telefone + "\n";
}