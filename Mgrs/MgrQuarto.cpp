#include "MgrQuarto.h"

bool MgrQuarto::cadastrar(Quarto &quarto)
{
    return this->quartoDao->create(quarto);
}

bool MgrQuarto::atualizar(Quarto &quarto)
{
    return this->quartoDao->update(quarto);
}

Quarto *MgrQuarto::pesquisar(int numero)
{
    return this->quartoDao->retrieve(numero);
}

void MgrQuarto::listar()
{
    for (int i = MAX_QUARTOS - 1; i >= 0; i--)
    {
        Quarto **quartos = this->quartoDao->list();

        if (quartos[i] != NULL)
        {
            cout << quartos[i]->toStringQuarto();
        }
    }
}