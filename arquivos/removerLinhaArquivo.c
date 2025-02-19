#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TamanhoLinha 256

int main() {
  FILE *arquivoEntrada = fopen("arquivoentrada.txt", "r");
  char linha[TamanhoLinha];
  int linhaPraRemover;
  int numeroLinha = 1;

  if (arquivoEntrada == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  FILE *arquivoSaida = fopen("arquivosaida.txt", "w");
  if (arquivoSaida == NULL) {
    printf("Erro ao abrir o arquivo\n");
    fclose(arquivoEntrada);
    return 1;
  }

  scanf("%d", &linhaPraRemover);

  while (fgets(linha, TamanhoLinha, arquivoEntrada) != NULL) {
    if (numeroLinha != linhaPraRemover) {
      fputs(linha, arquivoSaida);
    }
    numeroLinha++;
  }

  fclose(arquivoEntrada);
  fclose(arquivoSaida);

  return 0;
}