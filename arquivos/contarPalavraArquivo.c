#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Nem precisa desse tanto de biblioteca, eu adicionei pra caso precisasse no meio do caminho

int main() {
  FILE *arquivo = fopen("motivacao.txt", "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  int quantPalavras = 0, quantCaracteres = 0;
  char texto;
  int dentroPalavra = 0;

  // Vai contar caractere por caractere até chegar no final do arquivo
  while ((texto = fgetc(arquivo)) != EOF) {
    quantCaracteres++;
    if (isspace(texto)) {
      dentroPalavra = 0;
    } else if (!dentroPalavra) {
      quantPalavras++;
      dentroPalavra = 1;
    }
  }

  fclose(arquivo);

  printf("O arquivo contem %d palavras e %d caracteres", quantPalavras, quantCaracteres);
  return 0;
}