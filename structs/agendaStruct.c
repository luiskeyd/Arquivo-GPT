#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  char nome[100];
  char telefone[100];
} Pessoa;

void addPessoa(Pessoa *agenda, Pessoa *pessoa, int indice) {
  agenda[indice] = *pessoa;  // Copiando os dados corretamente
}

int main() {
  Pessoa agenda[3]; // Array para armazenar até 3 pessoas
  Pessoa pessoa;

  for (int i = 0; i < 3; i++) {
    printf("Digite o nome da pessoa %d: ", i + 1);
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = 0; // Removendo o '\n' do buffer

    printf("Digite o telefone da pessoa %d: ", i + 1);
    fgets(pessoa.telefone, sizeof(pessoa.telefone), stdin);
    pessoa.telefone[strcspn(pessoa.telefone, "\n")] = 0;

    addPessoa(agenda, &pessoa, i); // Passando um ponteiro para a função
  }

  printf("\nAgenda de Contatos:\n");
  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d: Nome: %s, Telefone: %s\n", i + 1, agenda[i].nome, agenda[i].telefone);
  }

  return 0;
}