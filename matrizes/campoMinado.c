#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); 
    int matriz[5][5];

    //preenchendo a matriz com valores aleatórios
    for(int i = 0; i<5 ; i++){
        for(int j = 0; j<5; j++){
            matriz[i][j] =  rand()%2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //Verificando as ajacencias;
    int cont = 0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5;j++){
            if(matriz[i][j] == 1)
                printf("* ");

            //verificando adjacencias
            else{
                if(matriz[i][j-1]==1 && j>0)
                    cont++;
                if(matriz[i][j+1]==1 && j<5)
                    cont++;
                if(matriz[i-1][j]==1 && i>0)
                    cont++;
                if(matriz[i+1][j]==1 && i<5)
                    cont++;

                printf("%d ", cont);
                cont = 0;
            }
        }
        printf("\n");
    }
    return 0;
}