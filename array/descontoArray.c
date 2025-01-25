#include <stdio.h>

void calcular_descontos(int precos[], int n, int resposta[]) {
    for (int i = 0; i < n; i++) {
        int desconto = 0;
        for (int j = i + 1; j < n; j++) {
            if (precos[j] <= precos[i]) {
                desconto = precos[j];
                break;
            }
        }
        resposta[i] = precos[i] - desconto;
    }
}

int main() {
    int precos[] = {8, 4, 6, 2, 3};
    int n = sizeof(precos) / sizeof(precos[0]);
    int resposta[n];

    calcular_descontos(precos, n, resposta);

    printf("Preços finais:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resposta[i]);
    }
    printf("\n");

    return 0;
}