#include "Sistema.h"

bool Sistema::cadastrarCliente(Cliente &cliente)
{
  return this->clienteDao->create(cliente);
}

bool Sistema::atualizarCliente(Cliente &cliente)
{
  return this->clienteDao->update(cliente);
}

Cliente *Sistema::pesquisarCliente(int clienteId)
{
  ClienteDao *clienteDao1 = new ClienteDao();

  return this->clienteDao->retrieve(clienteId);
}