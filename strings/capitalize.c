#include <stdio.h>

void capitalizeString(char string[])
{
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
    }
}

int main(){
    char string[] = "ola mundo";
    capitalizeString(string);
    printf("%s", string);
}