#pragma once

#include "../Classes/Cliente.h"
#include <string>
using namespace std;

#define MAX_CLIENTES 10

class ClienteDao
{
    Cliente *clientes[MAX_CLIENTES];
    int clientesCount = 0;

public:
    bool create(Cliente &);
    Cliente *retrieve(int);
    bool update(Cliente &);
    bool delete_(Cliente &);
};