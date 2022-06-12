#pragma once

#include <iostream>
#include <string>

using namespace std;

class Cliente
{
    int ID;
    string Nome;
    string CPF;
    string Telefone;

public:

    int getID();
    void setID(int);

    string getNome();
    void setNome(string);

    string getCpf();
    void setCpf(string);

    string getTel();
    void setTel(string);
};