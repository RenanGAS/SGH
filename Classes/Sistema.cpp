#include "Sistema.h"

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