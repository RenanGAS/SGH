#pragma once

#include "../Mgrs/MgrCliente.h"

class Sistema
{
  // Criamos managers por questões de responsabilidade

  MgrCliente *mgrCliente1 = new MgrCliente();
public:
  bool cadastrarCliente(Cliente &);
  bool atualizarCliente(Cliente &);
  Cliente *pesquisarCliente(string);
};