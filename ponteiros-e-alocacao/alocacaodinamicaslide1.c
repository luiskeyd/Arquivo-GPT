#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Cria um array e preenche com números aleatórios
int *alloc_randArray(int len)
{
    int *arr = (int *)malloc(len * sizeof(int));
    srand(time(NULL));

    if (arr == NULL)
    {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }

    for (int i = 0; i < len; i++)
    {
        arr[i] = rand() % 11;
    }
    return arr;
}

// Aumenta o tamanho em 50% e preenche com numeros aleatorios
int *realloc_randArray(int *arr, int *len)
{
    int oldlen = *len;
    *len = *len * (1.5);
    arr = realloc(arr, (*len * sizeof(int)));

    if (arr == NULL)
    {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }

    for (int i = oldlen; i < *len; i++)
    {
        arr[i] = rand() % 11;
    }
    return arr;
}

// Função que soma os valores do array
int sumarray(int *arr, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int len = 0;
    printf("Digite o tamanho do array: ");
    scanf("%d", &len);

    int *arr = alloc_randArray(len);
    int sum = sumarray(arr, len);
    
    // Imprime o array antes de verificar a soma
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    // Imprime a soma
    printf("%d ", sum);

    // Testa a soma e realoca se necessário
    if (sum >= 10)
    {
        arr = realloc_randArray(arr, &len);
        for (int i = 0; i < len; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    

}