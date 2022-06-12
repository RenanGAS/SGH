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
  Cliente *cliente1 = retrieve(cliente.getCpf());

  if (cliente1 == NULL)
  {
    return false;
  }

  // TODO: fix

  cliente1->setNome(cliente.getNome());
  cliente1->setCpf(cliente.getCpf());
  cliente1->setTel(cliente.getTel());

  return true;
}

Cliente *ClienteDao::retrieve(string clienteCpf)
{
  for (int i = 0; i < this->clientesCount; i++)
  {
    if (this->clientes[i]->getCpf() == clienteCpf)
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
    if (this->clientes[i]->getID() == cliente.getID())
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
  return false;
}