#include "./Classes/Sistema.h"
#include "./Classes/Cliente.h"
#include "./Classes/Quarto.h"
#include "./Tools/generators.h"

#include <iostream>
using namespace std;

int main()
{
  Sistema *sys1 = new Sistema();


  //-----------------------------------------------------
  //--------------- TESTE CLIENTE -----------------------
  //-----------------------------------------------------

  Cliente *c1 = sys1->pesquisarCliente("098.256.335-12");

  if (c1 == NULL)
  {
    cout << "\nErro: falha ao pesquisar o Cliente.\n";

    c1 = new Cliente();
    c1->setNome("Luffy");
    c1->setID(idGeneratorWrapper(c1->getNome()));
    c1->setCpf("098.256.335-12");
    c1->setTel("(44) 9 9987-3476");

    if (sys1->cadastrarCliente(*c1))
    {
      cout << "\nCliente cadastrado com sucesso!\n";

      sys1->listarClientes();
    }
    else
    {
      cout << "\nErro: falha ao cadastrar o Cliente.\n";
    }
  }
  else
  {
    Cliente *c = sys1->pesquisarCliente(c1->getCpf());

    sys1->listarClientes();
  }

  c1->setTel("(44) 9 9113-8876");

  if (sys1->atualizarCliente(*c1))
  {
    cout << "\nCliente atualizado com sucesso!\n";
    sys1->listarClientes();
  }
  else
  {
    cout << "\nErro: falha ao atualizar o Cliente.\n";
  }

  Cliente *c2 = new Cliente();
  c2->setNome("Zoro");
  c2->setID(idGeneratorWrapper(c2->getNome()));
  c2->setCpf("421.987.567-42");
  c2->setTel("(44) 9 5423-8905");

  if (sys1->cadastrarCliente(*c2))
  {
    cout << "\nCliente cadastrado com sucesso!\n";

    sys1->listarClientes();
  }
  else
  {
    cout << "\nErro: falha ao cadastrar o Cliente.\n";
  }


  //-----------------------------------------------------
  //--------------- TESTE QUARTO ------------------------
  //-----------------------------------------------------

  Quarto *n0 = new Quarto();
  n0->setID(idGeneratorWrapper("numero 0"));
  n0->setNumero(0);
  n0->setEspecificacao("Cama de casal, TV a cabo, Frigobar");
  n0->setStatus("Livre");

  if (sys1->cadastrarQuarto(*n0))
  {
    cout << "\nQuarto cadastrado com sucesso!\n";
  }
  else
  {
    cout << "\nErro: falha ao cadastrar o Quarto.\n";
  }

  Quarto *q = sys1->pesquisarQuarto(n0->getNumero());

  if (q == NULL)
  {
    cout << "\nErro: falha ao pesquisar o Quarto.\n";
  }
  else
  {
    sys1->listarQuartos();
  }

  n0->setStatus("Em limpeza");

  if (sys1->atualizarQuarto(*n0))
  {
    cout << "\nQuarto atualizado com sucesso!\n";
    sys1->listarQuartos();
  }
  else
  {
    cout << "\nErro: falha ao atualizar o Quarto.\n";
  }

  Quarto *n1 = new Quarto();
  n1->setID(idGeneratorWrapper("numero 1"));
  n1->setNumero(1);
  n1->setEspecificacao("Cama de casal, TV a cabo, Frigobar");
  n1->setStatus("Livre");

  if (sys1->cadastrarQuarto(*n1))
  {
    cout << "\nQuarto cadastrado com sucesso!\n";

    sys1->listarQuartos();
  }
  else
  {
    cout << "\nErro: falha ao cadastrar o Quarto.\n";
  }

  return 0;
}