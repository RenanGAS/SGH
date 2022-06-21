#pragma once

#include "../Daos/RelatorioDao.h"
#include "../Dvos/RelatorioDvo.h"
#include "../Mgrs/MgrReserva.h"

class MgrRelatorio
{
    RelatorioDao *relatorioDao = new RelatorioDao();
    RelatorioDvo *relatorioDvo = new RelatorioDvo();
    MgrReserva *mgrReserva1 = new MgrReserva();
    Reserva **reservasValidas = relatorioDvo->getReservasValidas();
    int countReservasValidas = relatorioDvo->getCountReservasV();

    int calcularReservas();
    float calcularRenda();
    bool cadastrar(Relatorio &);

public:
    bool atualizar(Relatorio &); // Corrige datas
    void listar();

    bool gerar(Relatorio &);    // Verifica dados
    bool imprimir(Relatorio &); // Printa informações
};