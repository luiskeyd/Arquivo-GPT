#include <stdio.h>

void mover_zeros_para_o_final(int arr[], int n) {
    int j = 0;  // Índice para a próxima posição não-zero

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Troca o elemento não-zero com o elemento na posição j
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    mover_zeros_para_o_final(arr, n);

    printf("Array após mover os zeros: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}