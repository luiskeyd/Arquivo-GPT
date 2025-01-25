#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[5][5];

    //preenchendo a matriz com valores aleatórios
    for(int i = 0; i<5 ; i++){
        for(int j = 0; j<5; j++){
            matriz[i][j] = rand()%10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //exibindo matriz transposta(basta inverter i j)
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}