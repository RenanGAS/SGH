#include "QuartoDao.h"

bool QuartoDao::create(Quarto &quarto)
{
  if (this->quartosCount == MAX_QUARTOS)
  {
    return false;
  }

  this->quartos[this->quartosCount++] = &quarto;

  return true;
}

bool QuartoDao::update(Quarto &quarto)
{
  Quarto *quarto1 = retrieve(quarto.getNumero());

  if (quarto1 == NULL)
  {
    return false;
  }

  quarto1->setNumero(quarto.getNumero());
  quarto1->setEspecificacao(quarto.getEspecificacao());
  quarto1->setStatus(quarto.getStatus());

  return true;
}

Quarto *QuartoDao::retrieve(int quartoNumero)
{
  for (int i = 0; i < this->quartosCount; i++)
  {
    if (this->quartos[i]->getNumero() == quartoNumero)
    {
      return this->quartos[i];
    }
  }

  return NULL;
}

bool QuartoDao::delete_(Quarto& quarto)
{
  for (int i = 0; i < MAX_QUARTOS; i++)
  {
    if (this->quartos[i]->getID() == quarto.getID())
    {
      delete quartos[i];
      for (int j = i; j < MAX_QUARTOS - 1; j++)
      {
        this->quartos[j] = this->quartos[j + 1];
      }
      this->quartosCount -= 1;
      return true;
    }
    return false;
  }
  return false;
}

Quarto **QuartoDao::list()
{
  return this->quartos;
}