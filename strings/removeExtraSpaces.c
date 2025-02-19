#include <stdio.h>

void removeSpaces(char *str)
{
    int spacebehind = 0;
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
            spacebehind = 0;
        }
        else
        {
            if (!spacebehind)
            {
                str[j++] = str[i];
                spacebehind = 1;
            }
        }
    }
    str[j] = '\0';
}

int main(){
    char string[] = {"Ola      mundo"};
    removeSpaces(string);
    printf("%s", string);

}
