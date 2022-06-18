#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Cliente.h"
#include "Quarto.h"

using namespace std;

class Reserva
{
    int ID;
    Cliente *cliente;
    Quarto *quarto;
    string dataEntrada;
    string dataSaida;
    int numeroPessoas;
    string status;
    float valorTotal;
    float valorAPagar;

public:
    int getID();
    void setID(int);

    Cliente *getCliente();
    void setCliente(Cliente *);

    Quarto *getQuarto();
    void setQuarto(Quarto *);

    string getDataEntrada();
    void setDataEntrada(string);

    string getDataSaida();
    void setDataSaida(string);

    int getNumeroPessoas();
    void setNumeroPessoas(int);

    string getStatus();
    void setStatus(string);

    float getValorTotal();
    void setValorTotal(float);

    float getValorAPagar();
    void setValorAPagar(float);

    string toStringReserva();
};