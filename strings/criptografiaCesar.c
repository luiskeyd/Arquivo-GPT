#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char texto[], int chave) {
  for (int i = 0; texto[i] != '\0'; i++) {
    if (isalpha(texto[i])) {
      char letra = texto[i];
      if (isupper(letra)) {
        texto[i] = 'A' + (letra - 'A' + chave) % 26;
      }
      else {
        texto[i] = 'a' + (letra - 'a' + chave) % 26;
      }
    }
  }
}

void descriptografar(char texto[], int chave) {
  for (int i = 0; texto[i] != '\0'; i++) {
    if (isalpha(texto[i])) {
      char letra = texto[i];
      if (isupper(letra)) {
        texto[i] = 'A' + (letra - 'A' - chave + 26) % 26;
      }
      else {
        texto[i] = 'a' + (letra - 'a' - chave + 26) % 26;
      }
    }
  }
}

int main() {
  char texto[100];
  int chave;
  
  fgets(texto, 100, stdin);
  texto[strcspn(texto, "\n")] = 0;

  scanf("%d", &chave);
  while (getchar() != '\n');

  criptografar(texto, chave);
  printf("Texto criptografado:%s\n", texto);
  
  descriptografar(texto, chave);
  printf("Texto descriptografado:%s\n", texto);

  return 0;
}