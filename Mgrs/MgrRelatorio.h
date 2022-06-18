#pragma once

#include "../Classes/Relatorio.h"
#include "../Daos/RelatorioDao.h"
#include "../DVO/RelatorioDvo.h"


class MgrRelatorio
{
    RelatorioDao *relatorioDao = new RelatorioDao();
    RelatorioDvo *relatorioDvo = new RelatorioDvo();

public:
    bool gerar(Relatorio &); // Verifica dados
    bool atualizar(Relatorio &); // Corrige datas
    bool imprimir(Relatorio &); // Printa informações
};