#pragma once

#include "../Classes/Relatorio.h"
#include <string>
using namespace std;

class RelatorioDao
{
public:
    bool update(Relatorio &);
    bool delete_(Relatorio &);
};