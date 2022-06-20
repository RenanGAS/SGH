#pragma once

#include "../Classes/Relatorio.h"
#include <string>
using namespace std;

#define MAX_RELATORIOS 10

class RelatorioDao
{
    Relatorio *relatorios[MAX_RELATORIOS];
    int relatoriosCount = 0;
    
public:
    bool create(Relatorio &);
    Relatorio *retrieve(int);
    bool update(Relatorio &);
    bool delete_(Relatorio &);
    Relatorio **list();
    string show(Relatorio &);
};