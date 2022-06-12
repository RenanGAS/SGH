#pragma once

#include "../Mgrs/MgrCliente.h"
#include "../Mgrs/MgrQuarto.h"

class Sistema
{
  // Criamos managers por questões de responsabilidade

  MgrCliente *mgrCliente1 = new MgrCliente();
  MgrQuarto *mgrQuarto1 = new MgrQuarto();
public:
  bool cadastrarCliente(Cliente &);
  bool atualizarCliente(Cliente &);
  Cliente *pesquisarCliente(string);

  bool cadastrarQuarto(Quarto &);
  bool atualizarQuarto(Quarto &);
  Quarto *pesquisarQuarto(int);
};