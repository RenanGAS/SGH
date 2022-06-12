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

  Cliente *c1 = sys1->pesquisarCliente("037.827.221-75");

  if (c1 == NULL)
  {
    cout << "\nErro: falha ao pesquisar o Cliente.\n";

    c1 = new Cliente();
    c1->nome = "Renan";
    c1->id = idGeneratorWrapper(c1->nome);
    c1->cpf = "037.827.221-75";
    c1->tel = "(44) 9 9112-8875";

    if (sys1->cadastrarCliente(*c1))
    {
      cout << "\nCliente cadastrado com sucesso!\n";
    }
    else
    {
      cout << "\nErro: falha ao cadastrar o Cliente.\n";
    }
  }
  else
  {
    Cliente *c = sys1->pesquisarCliente(c1->cpf);

    cout << "\nID: " << c->id << "\nNome: " << c->nome << "\nCPF: " << c->cpf << "\nTelefone: " << c->tel << "\n";
  }

  c1->tel = "(44) 9 9113-8876";

  if (sys1->atualizarCliente(*c1))
  {
    cout << "\nCliente atualizado com sucesso!\n";
    cout << "\nID: " << c1->id << "\nNome: " << c1->nome << "\nCPF: " << c1->cpf << "\nTelefone: " << c1->tel << "\n";
  }
  else
  {
    cout << "\nErro: falha ao atualizar o Cliente.\n";
  }


  //-----------------------------------------------------
  //--------------- TESTE QUARTO ------------------------
  //-----------------------------------------------------

  Quarto *n0 = new Quarto();
  n0->id = idGeneratorWrapper("numero 0");
  n0->numero = 0;
  n0->especificacao = "Cama de casal, TV a cabo, Frigobar";
  n0->status = "Livre";

  if (sys1->cadastrarQuarto(*n0))
  {
    cout << "\nQuarto cadastrado com sucesso!\n";
  }
  else
  {
    cout << "\nErro: falha ao cadastrar o Quarto.\n";
  }

  Quarto *q = sys1->pesquisarQuarto(n0->numero);

  if (q == NULL)
  {
    cout << "\nErro: falha ao pesquisar o Quarto.\n";
  }
  else
  {
    cout << "\nID: " << q->id << "\nNumero: " << q->numero << "\nEspecificacao: " << q->especificacao << "\nStatus: " << q->status << "\n";
  }

  n0->status = "Em limpeza";

  if (sys1->atualizarQuarto(*n0))
  {
    cout << "\nQuarto atualizado com sucesso!\n";
    cout << "\nID: " << q->id << "\nNumero: " << q->numero << "\nEspecificacao: " << q->especificacao << "\nStatus: " << q->status << "\n";
  }
  else
  {
    cout << "\nErro: falha ao atualizar o Quarto.\n";
  }

  return 0;
}