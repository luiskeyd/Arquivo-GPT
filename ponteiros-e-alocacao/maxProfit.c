#include <stdio.h>
#include <stdlib.h>
 
int maxProfit(int* precos, int len) {
  int maximo = 0;
  int *inicio = precos;
  int *fim = precos + len - 1;

  for (int *i = inicio; i < fim - 1; i++) {
    for (int *j = inicio + 1; j < fim; j++) {
      if ((*j - *i) > maximo) {
        maximo = (*j - *i);
      }
    }
  }
  return maximo;
}

int main() {
  int arr[] = {7, 1, 5, 3, 6, 4};
  int tamanho = sizeof(arr) / sizeof(int);

  int lucro = maxProfit(arr, tamanho);

  printf("%d ", lucro);

  return 0;
}