#include "ReservaDao.h"

bool ReservaDao::create(Reserva &reserva)
{
    if (this->reservasCount == MAX_RESERVAS)
    {
        return false;
    }

    this->reservas[this->reservasCount++] = &reserva;

    return true;
}

bool ReservaDao::update(Reserva &reserva)
{
    Reserva *reserva1 = retrieve(reserva.getID());

    if (reserva1 == NULL)
    {
        return false;
    }

    reserva1->setCliente(reserva.getCliente());
    reserva1->setQuarto(reserva.getQuarto());
    reserva1->setDataEntrada(reserva.getDataEntrada());
    reserva1->setDataSaida(reserva.getDataSaida());
    reserva1->setNumeroPessoas(reserva.getNumeroPessoas());
    reserva1->setValorAPagar(reserva.getValorAPagar());

    return true;
}

Reserva *ReservaDao::retrieve(int reservaID)
{
    for (int i = 0; i < this->reservasCount; i++)
    {
        if (this->reservas[i]->getID() == reservaID)
        {
            return this->reservas[i];
        }
    }

    return NULL;
}

bool ReservaDao::delete_(Reserva &reserva)
{
    for (int i = 0; i < MAX_RESERVAS; i++)
  {
    if (this->reservas[i]->getID() == reserva.getID())
    {
      delete reservas[i];
      for (int j = i; j < MAX_RESERVAS - 1; j++)
      {
        this->reservas[j] = this->reservas[j + 1];
      }
      this->reservasCount -= 1;
      return true;
    }
    return false;
  }
  return false;
}

Reserva **ReservaDao::list()
{
    return this->reservas;
}