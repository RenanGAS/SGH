#include "generators.h"

#include <iostream>
#include <cstdlib>

static unsigned int idGenerator(string nome, int K, int i, unsigned int P)
{
    if (i == nome.size())
    {
        return P;
    }

    int aux = nome[i];

    P = P * K + aux;

    i++;

    return idGenerator(nome, K, i, P);
}

unsigned int idGeneratorWrapper(string nome)
{
    unsigned int M = 100000, K = 13, id;

    id = idGenerator(nome, K, 1, nome[0]);

    return id % M;
}