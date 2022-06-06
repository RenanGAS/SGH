#include "./Classes/Sistema.h"
#include "./Classes/Cliente.h"
#include "./Tools/generators.h"

#include <iostream>
using namespace std;

int main()
{
  Sistema *sys1 = new Sistema();

  Cliente *c1 = new Cliente();

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

  c1 = sys1->pesquisarCliente(c1->id);

  if (c1 != NULL)
  {
    cout << "\nID: " << c1->id << "\nNome: " << c1->nome << "\nCPF: " << c1->cpf << "\nTelefone: " << c1->tel << "\n";
  }
  else
  {
    cout << "\nErro: falha ao pesquisar o Cliente.\n";
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

  return 0;
}