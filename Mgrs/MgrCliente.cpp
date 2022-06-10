#include "MgrCliente.h"

bool MgrCliente::cadastrar(Cliente &cliente)
{
    return this->clienteDao->create(cliente);
}

bool MgrCliente::atualizar(Cliente &cliente)
{
    return this->clienteDao->update(cliente);
}

Cliente *MgrCliente::pesquisar(string Nome)
{
    return this->clienteDao->retrieve(Nome);
}