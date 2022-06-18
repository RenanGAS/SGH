#include "Sistema.h"

// Cliente

bool Sistema::cadastrarCliente(Cliente &cliente)
{
  return mgrCliente1->cadastrar(cliente);
}

bool Sistema::atualizarCliente(Cliente &cliente)
{
  return mgrCliente1->atualizar(cliente);
}

Cliente *Sistema::pesquisarCliente(string Nome)
{
  return mgrCliente1->pesquisar(Nome);
}

void Sistema::listarClientes()
{
  mgrCliente1->listar();
}

// Quarto

bool Sistema::cadastrarQuarto(Quarto &quarto)
{
  return mgrQuarto1->cadastrar(quarto);
}

bool Sistema::atualizarQuarto(Quarto &quarto)
{
  return mgrQuarto1->atualizar(quarto);
}

Quarto *Sistema::pesquisarQuarto(int numero)
{
  return mgrQuarto1->pesquisar(numero);
}

void Sistema::listarQuartos()
{
  mgrQuarto1->listar();
}


// Reserva

bool Sistema::cadastrarReserva(Reserva &reserva)
{
  return mgrReserva1->cadastrar(reserva);
}

bool Sistema::atualizarReserva(Reserva &reserva)
{
  return mgrReserva1->atualizar(reserva);
}

Reserva *Sistema::pesquisarReserva(int id)
{
  return mgrReserva1->pesquisar(id);
}

void Sistema::listarReservas()
{
  mgrReserva1->listar();
}