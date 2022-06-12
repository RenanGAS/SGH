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