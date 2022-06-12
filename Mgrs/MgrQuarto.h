#pragma once

#include "../Classes/Quarto.h"
#include "../Daos/QuartoDao.h"


class MgrQuarto
{
    QuartoDao *quartoDao = new QuartoDao();
public:
    bool cadastrar(Quarto &);
    bool atualizar(Quarto &);
    Quarto *pesquisar(int);
    void listar();
};