#include <stdio.h>

int findOcurrence(char *str, char *ocurrence)
{
    int len = 0;
    int ocurrencelen = 0;
    int flag = 0;
    
    while(str[len] != '\0')
    {
        len++;
    }

    while(ocurrence[ocurrencelen] != '\0')
    {
        ocurrencelen++;
    }


    for(int i = 0; i <= len - ocurrencelen; i++)
    {
        flag = 1;
        for(int j = 0; j < ocurrencelen; j++)
        {
            if(str[i+j] != ocurrence[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            return i;
        }   
    }
    return -1;
}

int main(){
    char string[] = {"Ola mundo"};
    char ocurrence[] = {"mundo"};
    printf("%d", findOcurrence(string, ocurrence));

}