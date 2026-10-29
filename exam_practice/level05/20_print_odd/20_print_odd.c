
#include <unistd.h>

int main(int c, char **v)
{
    if (c == 2)
    {
        
        char *str = v[1];
        int i = 0;
    
        while (*str)
        {
            if(i % 2 != 0)
            write(1, str, 1);
            str++;
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}