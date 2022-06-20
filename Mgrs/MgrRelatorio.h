#pragma once

#include "../Classes/Relatorio.h"
#include "../Daos/RelatorioDao.h"
#include "../Dvos/RelatorioDvo.h"
#include "../Daos/ReservaDao.h"

class MgrRelatorio
{
    RelatorioDao *relatorioDao = new RelatorioDao();
    RelatorioDvo *relatorioDvo = new RelatorioDvo();
    ReservaDao *reservaDao1 = new ReservaDao();
    Reserva **reservas = reservaDao1->list();

    int calcularReservas();
    float calcularRenda();

public:
    bool cadastrar(Relatorio &);
    bool atualizar(Relatorio &); // Corrige datas
    void listar();

    bool gerar(Relatorio &);     // Verifica dados
    bool imprimir(Relatorio &);  // Printa informações
};