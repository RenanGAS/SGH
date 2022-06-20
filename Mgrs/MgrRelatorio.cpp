#include "MgrRelatorio.h"

int MgrRelatorio::calcularReservas()
{
}

float MgrRelatorio::calcularRenda()
{
}

bool MgrRelatorio::cadastrar(Relatorio &relatorio)
{
    return this->relatorioDao->create(relatorio);
}

void MgrRelatorio::listar()
{
    for (int i = MAX_RELATORIOS - 1; i >= 0; i--)
    {
        Relatorio **relatorios = this->relatorioDao->list();

        if (relatorios[i] != NULL)
        {
            cout << relatorios[i]->toStringRelatorio();
        }
    }
}

bool MgrRelatorio::gerar(Relatorio &relatorio)
{
    if (!(this->relatorioDvo->verificarPeriodo(relatorio.getDataInicio(), relatorio.getDataFinal())))
    {
        return false;
    }

    relatorio.setQuantidadeReservas(calcularReservas());
    relatorio.setRenda(calcularRenda());

    return true;
}

bool MgrRelatorio::atualizar(Relatorio &relatorio)
{
    this->relatorioDao->update(relatorio);
}

bool MgrRelatorio::imprimir(Relatorio &relatorio)
{
    relatorio.toStringRelatorio();

    return true;
}