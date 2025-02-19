#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TamanhoLinhas 256

int main() {
  FILE *arquivo1 = fopen("arquivoentrada.txt", "r");
  char linha[TamanhoLinhas];

  if (arquivo1 == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  FILE *arquivo2 = fopen("motivacao.txt", "r");
  if (arquivo1 == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  FILE *arquivoMesclado = fopen("arquivosaida.txt", "w");
  if (arquivoMesclado == NULL) {
    printf("Erro ao abrir o arquivo\n");
    fclose(arquivo1);
    fclose(arquivo2);
    return 1;
  }


  while (fgets(linha, TamanhoLinhas, arquivo1) != NULL) {
    fputs(linha, arquivoMesclado);
  }

  while (fgets(linha, TamanhoLinhas, arquivo2) != NULL) {
    fputs(linha, arquivoMesclado);
  }
    
  fclose(arquivo1);
  fclose(arquivo2);
  fclose(arquivoMesclado);

  return 0;
}