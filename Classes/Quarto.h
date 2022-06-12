#pragma once

#include <iostream>
#include <string>

using namespace std;

class Quarto
{
    int ID;
    int Numero;
    string Especificacao;
    string Status;

public:
    int getID();
    void setID(int);

    int getNumero();
    void setNumero(int);

    string getEspecificacao();
    void setEspecificacao(string);

    string getStatus();
    void setStatus(string);

    string toStringQuarto();
};