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

void MgrCliente::listar()
{
    for (int i = MAX_CLIENTES - 1; i >= 0; i--)
    {
        Cliente **clientes = this->clienteDao->list();

        if (clientes[i] != NULL)
        {
            cout << clientes[i]->toStringCliente();
        }
    }
}