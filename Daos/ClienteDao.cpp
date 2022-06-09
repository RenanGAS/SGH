#include "ClienteDao.h"

bool ClienteDao::create(Cliente &cliente)
{
  if (this->clientesCount == MAX_CLIENTES)
  {
    return false;
  }

  this->clientes[this->clientesCount++] = &cliente;

  return true;
}

bool ClienteDao::update(Cliente &cliente)
{
  Cliente *cliente1 = retrieve(cliente.id);

  if (cliente1 == NULL)
  {
    return false;
  }

  cliente1->nome = cliente.nome;
  cliente1->cpf = cliente.cpf;
  cliente1->tel = cliente.tel;

  return true;
}

Cliente *ClienteDao::retrieve(int clienteId)
{
  for (int i = 0; i < this->clientesCount; i++)
  {
    if (this->clientes[i]->id == clienteId)
    {
      return this->clientes[i];
    }
  }

  return NULL;
}

bool ClienteDao::delete_(Cliente& cliente)
{
  for (int i = 0; i < MAX_CLIENTES; i++)
  {
    if (this->clientes[i]->id = cliente.id)
    {
      delete clientes[i];
      for (int j = i; j < MAX_CLIENTES - 1; j++)
      {
        this->clientes[j] = this->clientes[j + 1];
      }
      this->clientesCount -= 1;
      return true;
    }
    return false;
  }
  
}