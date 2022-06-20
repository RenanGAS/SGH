#include "MgrRelatorio.h"

int MgrRelatorio::calcularReservas()
{
    return this->countReservasValidas;
}

float MgrRelatorio::calcularRenda()
{
    float rendaTotal = 0;

    for (int i = 0; i < this->countReservasValidas; i++)
    {
        rendaTotal += reservasValidas[i]->getValorTotal();
    }

    return rendaTotal;
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

    if (!(cadastrar(relatorio)))
    {
        return false;
    }

    return true;
}

bool MgrRelatorio::atualizar(Relatorio &relatorio)
{
    this->relatorioDao->update(relatorio);
}

bool MgrRelatorio::imprimir(Relatorio &relatorio)
{
    string strRelatorio = this->relatorioDao->show(relatorio);

    int resultCmp = strRelatorio.compare("false");

    if (resultCmp == 0)
    {
        return false;
    }

    cout << "\n" + strRelatorio + "\n";

    return true;
}