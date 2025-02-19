#include <stdio.h>

void removeRepeated(char *str)
{
    char repeated[256] = {};
    int newindex = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
       if(!repeated[(unsigned char)str[i]])
       {
        repeated[(unsigned char)str[i]] = 1;
        str[newindex++] = str[i];
       }
    }
    str[newindex] = '\0';
}

int main(){
    char string[] = {"Olaaa mundo"};
    removeRepeated(string);
    printf("%s", string);

}

