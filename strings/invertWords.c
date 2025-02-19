#include <stdio.h>

void invertWords(char string[], int start, int end)
{
    while(start < end)
    {
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        
        start++;
        end--;
    }
}

void invertString(char string[])
{
    int len = 0;
    int wordStart = 0;
    while(string[len] != '\0')
    {
        len++;
    }


    invertWords(string, 0, len-1);

    for(int i = 0; i <= len; i++)
    {
        if(string[i] == ' ' || string[i] == '\0')
        {
            invertWords(string, wordStart, i-1);
            wordStart = i+1;
        }
    }
}

int main(){
    char string[] = {"Ola mundo"};
    invertString(string);
    printf("%s", string);

}
