#include <stdio.h>

int ispalindrome(char string[])
{
    int len = 0;
    int end = 0;
    while(string[len] != '\0')
    {
        len++;
    }

    end = len-1;
    
    for(int i = 0; i < len/2; i++)
    {
        if(string[i] != string[end--])
        {
            return 0;
        }
    }
    return 1;
}


int main(){
    char string[] = "arara";
    printf("%d", ispalindrome(string));
}