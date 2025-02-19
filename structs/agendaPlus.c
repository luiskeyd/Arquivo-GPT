// Agenda anterior, mas melhorada com a função de buscar nome
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

char *buscaPessoa(Pessoa *agenda, int tamanho, char *nome) {
  for (int i = 0; i < tamanho; i++) {
    if (strcmp(agenda[i].nome, nome) == 0) {
      return agenda[i].telefone;
    }
  }
  return NULL;
}

// Algumas funções como remover o \n do buffer eu acho que nem precisa, tá aí pq o gpt considerou como uma boa correção
int main() {
  Pessoa agenda[3]; // Array para armazenar até 3 pessoas
  Pessoa pessoa;
  char nomeBusca[100];

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

  printf("\nDigite o nome da pessoa que deseja buscar: ");
  fgets(nomeBusca, sizeof(nomeBusca), stdin);
  nomeBusca[strcspn(nomeBusca, "\n")] = 0;

  char *telefoneEncontrado = buscaPessoa(agenda, 3, nomeBusca);

  if (telefoneEncontrado) {
    printf("Telefone de %s: %s\n", nomeBusca, telefoneEncontrado);
  }
  else {
    printf("Nao encontrado");
  }

  return 0;
}