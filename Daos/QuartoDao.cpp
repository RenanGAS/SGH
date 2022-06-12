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
  Quarto *quarto1 = retrieve(quarto.numero);

  if (quarto1 == NULL)
  {
    return false;
  }

  quarto1->numero = quarto.numero;
  quarto1->especificacao = quarto.especificacao;
  quarto1->status = quarto.status;

  return true;
}

Quarto *QuartoDao::retrieve(int quartoNumero)
{
  for (int i = 0; i < this->quartosCount; i++)
  {
    if (this->quartos[i]->numero == quartoNumero)
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
    if (this->quartos[i]->id = quarto.id)
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