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