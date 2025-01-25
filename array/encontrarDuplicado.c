#include <stdio.h>

int cont_dupla (int vetor[], int n){

    //primeiro ordenamos o vetor
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vetor[i]>vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    //imprimindo o vetor ordenado
    for(int i = 0; i<n;i++){
        printf("%d ", vetor[i]);
    }
    
    //agora verificamos as duplas
    int contador = 0;
    for(int i = 0; i<n;i++){
        if(vetor[i] == vetor[i+1]){
            contador++;
            i++;
        }
    }
    return contador;
}

int main(){
    int n = 6;
    int vetor[] = {1, 2, 1, 2, 3, 4};
    printf("O numero de duplas e: %d", cont_dupla(vetor, n));
    return 0;
}