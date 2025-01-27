#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define limit 10

int main(){
    srand(time(NULL));

    int n = 0;
    scanf("%d", &n);
    printf("\n");

    //criando array dinamico
    int *arr = (int *) malloc(sizeof(int)*n);
    if(arr == NULL) return -1;

    //prenchendo valores
    for(int i = 0; i<n; i++){
        *(arr+i) = rand()%10;
        printf("%d ", *(arr+i));
    }

    //somando vares
    int soma = 0;
    for(int i = 0; i<n;i++){
        soma+= *(arr+i);
    }

    printf("\n%d\n", soma);

    //verifando se ultrapassa o limite
    if(soma > limit){
        int novoTam = n*1.5;
        arr = realloc(arr, sizeof(int)*novoTam);

        //preenchendo os valores vazios
        for(int i = n; i < novoTam;i++){
            *(arr+i) = rand()%10;
        }

        //somando e exibindo os novos valores
        soma = 0;
        for(int i = 0; i<novoTam;i++){
            printf("%d ", arr[i]);
            soma+= *(arr+i);
        }
        printf("\n%d\n", soma);
    }

    return 0;
}