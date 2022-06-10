#pragma once

#include "../Classes/Cliente.h"
#include "../Daos/ClienteDao.h"


class MgrCliente
{
    ClienteDao *clienteDao = new ClienteDao();
public:
    bool cadastrar(Cliente &);
    bool atualizar(Cliente &);
    Cliente *pesquisar(string);
};