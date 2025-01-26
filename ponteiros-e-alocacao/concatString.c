#include <stdio.h>

int main(){

    char str1[100], str2[100];
    scanf("%s", str1); 
    scanf("%s", str2); 
 
    char *ptr1 = str1;  
    char *ptr2 = str2;  

    while (*ptr1 != '\0') {
        ptr1++;
    }
  
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;          
        ptr2++;          
    }
    *ptr1 = '\0';

    printf("%s\n", str1);
    return 0;
}