#include <stdio.h>
#include <stdlib.h>

int removeocurrence(int *arr, int len, int ocurrence){
    int new_len = 0;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] != ocurrence)
        {
            arr[new_len] = arr[i];
            new_len++;
        }
    }
    return new_len;
}

int main(){
    int array[] = {3,5,2,5,7,5,9};
    int len = sizeof(array)/sizeof(array[0]);
    int ocurrence = 5;

    int new_len = removeocurrence(array, len, ocurrence);
    len = new_len;
    for(int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}