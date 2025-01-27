#include <stdio.h>
#include <stdlib.h>

void addTelefone(int *agenda, int numero, int n){
    for(int i = 0; i < n;i++){
        if(*(agenda+i) == 0){
            *(agenda+1) = numero;
            break;
        }
    }
}

int main(){
    int *agenda, n;
    //criando a agenda e preenchendo
    printf("Digite o tamanho da sua agenda: ");
    scanf("%d", &n);
    agenda = (int*) malloc(sizeof(int) * n);

    if(agenda == NULL) return -1;
    printf("Digite os numeros (ou digite 0 para pular)\n");
    for(int i = 0; i<n; i++){
        int x;
        scanf("%d", &x);
        *(agenda+i) = x;
    }
    printf("\n\n");
    addTelefone(agenda, 98991, n);
    for(int i = 0; i<n;i++){
        printf("%d\n", *(agenda+i));
    }
    
    return 0;
}