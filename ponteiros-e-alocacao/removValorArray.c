#include <stdio.h>

void removeOcorrencias(int *arr, int *tam, int x){
    for(int i = 0; i < *tam; i++){
        if(*(arr+i) == x){
            for(int j = i; j < *tam; j++){
                *(arr+j) = *(arr+j+1);
            }
            (*tam)--;
        }
    }
}
int main(){
    int n = 5;
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array;
    removeOcorrencias(ptr, &n, 1); 

    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}