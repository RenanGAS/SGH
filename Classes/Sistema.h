#pragma once

#include "../Mgrs/MgrCliente.h"
#include "../Mgrs/MgrQuarto.h"
#include "../Mgrs/MgrReserva.h"

class Sistema
{
  // Criamos managers por questões de responsabilidade

  MgrCliente *mgrCliente1 = new MgrCliente();
  MgrQuarto *mgrQuarto1 = new MgrQuarto();
  MgrReserva *mgrReserva1 = new MgrReserva();

public:
  bool cadastrarCliente(Cliente &);
  bool atualizarCliente(Cliente &);
  Cliente *pesquisarCliente(string);
  void listarClientes();

  bool cadastrarQuarto(Quarto &);
  bool atualizarQuarto(Quarto &);
  Quarto *pesquisarQuarto(int);
  void listarQuartos();

  bool cadastrarReserva(Reserva &);
  bool atualizarReserva(Reserva &);
  Reserva *pesquisarReserva(int);
  void listarReservas();
};