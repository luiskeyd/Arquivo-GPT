#include <stdio.h>

void invert(int *arr, int len)
{
    int aux = 0;
    int j = len-1;
    for(int i = 0; i < len/2; i++)
    {
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
        j--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    invert(arr,len);
    
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
}