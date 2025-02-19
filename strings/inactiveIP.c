#include <stdio.h>

void deactiveIp(char *ip)
{
    int j = 0;
    for(int i = 0; ip[i] != '\0'; i++)
    {
        if(ip[i] == '.' )
        {
            ip[j++] = '[';
            ip[j++] = '.';
            ip[j++] = ']';
        }
        else
        {
            ip[j++] = ip[i];
        }
    }
    ip[j] = '\0';
}

int main(){
    char string[100] = "1.1.1.1";
    deactiveIp(string);
    printf("%s", string);

}