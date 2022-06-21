#include "MgrReserva.h"

bool MgrReserva::cadastrar(Reserva &reserva)
{
    return this->reservaDao->create(reserva);
}

bool MgrReserva::atualizar(Reserva &reserva)
{
    return this->reservaDao->update(reserva);
}

Reserva *MgrReserva::pesquisar(int id)
{
    return this->reservaDao->retrieve(id);
}

void MgrReserva::listar()
{
    for (int i = MAX_RESERVAS - 1; i >= 0; i--)
    {
        Reserva **reservas = this->reservaDao->list();

        if (reservas[i] != NULL)
        {
            cout << reservas[i]->toStringReserva();
        }
    }
}

Reserva **MgrReserva::getListaReservas()
{
    return this->reservaDao->list();
}

bool MgrReserva::pagar(Reserva &reserva, float valor)
{
    return this->reservaDao->update(reserva, valor);
}

bool MgrReserva::estender(Reserva &reserva, string dataSaida)
{
    return this->reservaDao->update(reserva, dataSaida);
}