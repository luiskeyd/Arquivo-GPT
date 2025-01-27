#include <stdio.h>
#include <stdlib.h>

int main(){
    int loteria[] = {37, 52, 21, 24, 12, 3};
    int meubilhete[] = {37, 52, 21, 24, 8, 9};
    int acertos = 0;
    int *lista_acertos = NULL;
    int len = 0;
    
    for(int i = 0; i < 6; i++ )
    {
        for(int j = 0; j < 6; j++)
        {
            if (meubilhete[i] == loteria[j])
            {
                acertos++;
                lista_acertos = (int*)realloc(lista_acertos, acertos*sizeof(int));
                lista_acertos[acertos-1] = meubilhete[i];
                len++;
            }
        }
    }
    
    for(int i = 0; i < len; i++){
        printf("%d ", lista_acertos[i]);
    }
}