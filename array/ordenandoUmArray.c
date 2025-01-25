#include <stdio.h>

void ordenandoArray(int arr[], int tam){
    int arrOrdenado[tam];
    int aux;
    for(int i = 0; i<tam;i++){
        for(int j = i+1; j<tam;j++){
            if(arr[i]>arr[j]){
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

int main(){
    int vet[] = {3, 4, 2, 1, 5, 8, 1, 0, 1, 4, 3};
    ordenandoArray(vet, 11);

    for(int i = 0; i<11;i++){
        printf("%d ", vet[i]);
    }
    return 0;
}