#pragma once

#include "../Classes/Cliente.h"
#include "../Daos/ClienteDao.h"
#include <iostream>
using namespace std;


class MgrCliente
{
    ClienteDao *clienteDao = new ClienteDao();
public:
    bool cadastrar(Cliente &);
    bool atualizar(Cliente &);
    Cliente *pesquisar(string);
    void listar();
};