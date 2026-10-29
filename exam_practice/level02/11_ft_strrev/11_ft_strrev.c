#include <stdio.h>

char *ft_strrev(char *str)
{
    char temp;
    char *end = str;
    char *start = str;
    while (*end)
        end++;

    end--;
    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        end--;
        str++;
    }
    return start;
}
