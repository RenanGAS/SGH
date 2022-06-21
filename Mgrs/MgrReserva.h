#pragma once

#include "../Daos/ReservaDao.h"

class MgrReserva
{
    ReservaDao *reservaDao = new ReservaDao();
public:
    bool cadastrar(Reserva &);
    bool atualizar(Reserva &);
    Reserva *pesquisar(int);
    void listar();
    Reserva **getListaReservas();
};