#include "RelatorioDao.h"

bool RelatorioDao::create(Relatorio &relatorio)
{
    if (this->relatoriosCount == MAX_RELATORIOS)
    {
        return false;
    }

    this->relatorios[this->relatoriosCount++] = &relatorio;

    return true;
}

Relatorio *RelatorioDao::retrieve(int relatorioID)
{
    for (int i = 0; i < this->relatoriosCount; i++)
    {
        if (this->relatorios[i]->getID() == relatorioID)
        {
            return this->relatorios[i];
        }
    }

    return NULL;
}

bool RelatorioDao::update(Relatorio &relatorio)
{
    Relatorio *relatorio1 = retrieve(relatorio.getID());

    if (relatorio1 == NULL)
    {
        return false;
    }

    relatorio1->setID(relatorio.getID());
    relatorio1->setDataInicio(relatorio.getDataInicio());
    relatorio1->setDataFinal(relatorio.getDataFinal());

    return true;
}

bool RelatorioDao::delete_(Relatorio &relatorio)
{
    for (int i = 0; i < MAX_RELATORIOS; i++)
    {
        if (this->relatorios[i]->getID() == relatorio.getID())
        {
            delete relatorios[i];
            for (int j = i; j < MAX_RELATORIOS - 1; j++)
            {
                this->relatorios[j] = this->relatorios[j + 1];
            }
            this->relatoriosCount -= 1;
            return true;
        }
        return false;
    }
    return false;
}

Relatorio **RelatorioDao::list()
{
    return this->relatorios;
}