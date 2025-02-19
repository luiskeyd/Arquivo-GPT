#include <stdio.h>

int romanToInt(char *str)
{
    int total = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case 'I':
            if(str[i+1] == 'V' || str[i+1] == 'X')
            {
                total -= 1;
            }
            else
            {
                total += 1;
            }
            break;
        
        case 'X':
            if(str[i+1] == 'L' || str[i+1] == 'C')
            {
                total -= 10;
            }
            else
            {
                total += 10;
            }
            break;

        case 'C':
            if(str[i+1] == 'D' || str[i+1] == 'M')
            {
                total -= 100;
            }
            else
            {
                total += 100;
            }
            break;

        case 'V':
           total += 5;
           break; 

        case 'L':
            total += 50;
            break; 
        
        case 'D':
            total += 500;
            break; 
        
        case 'M':
            total += 1000;
            break; 

        default:
            break;
        }
    }

    return total;

}

int main()
{
    char str[] = "XXI";
    printf("%d", romanToInt(str));
}