#include <stdio.h>

void rotacionar_esquerda(int arr[], int n, int rotacoes) {
    for (int i = 0; i < rotacoes; i++) {
        int temp = arr[0]; // Armazena o primeiro elemento
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1]; // Desloca os elementos para a esquerda
        }
        arr[n - 1] = temp; // Coloca o elemento armazenado no final
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotacoes;
    scanf("%d", &rotacoes);

    printf("Array original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotacionar_esquerda(arr, n, rotacoes);

    printf("\nArray rotacionado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}