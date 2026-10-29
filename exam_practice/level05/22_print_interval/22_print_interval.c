#include <unistd.h>

int main(int c, char **v)
{
    if (c == 2)
    {
        
        char *str = v[1];
        int i = 0;
    
        while (*str)
        {
            if(i % 5 == 0 && i % 3 == 0)
            {
                *str = '5';
                write(1, str, 1);
            } 
            else if(i % 3 == 0)
            {
                *str = '5';
                write(1, str, 1);
            } 
            else if(i % 5 == 0)
            {
                *str = '3';
                write(1, str, 1);
            } 
            else 
                 write(1, str, 1);
            str++;
            i++;
       
        }
    }
    write(1, "\n", 1);
    return(0);
}