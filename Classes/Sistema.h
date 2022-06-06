#pragma once

#include "Cliente.h"
#include "../Daos/ClienteDao.h"

class Sistema
{
  ClienteDao *clienteDao = new ClienteDao();

public:
  bool cadastrarCliente(Cliente &);
  bool atualizarCliente(Cliente &);
  Cliente *pesquisarCliente(int);
};