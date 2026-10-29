#include <unistd.h>

int main(int c, char **v)
{
    if (c == 2)
    {
        
        char *str = v[1];
    
        while (*str)
        {
            if(*str >= 'a' && *str <= 'y')
            {
                *str += 1;
                write(1, str, 1);
            } 
            else if(*str >= 'A' && *str <= 'Y')
            {
                *str +=  1;
                write(1, str, 1);
            } 
            else if (*str == 'Z')   
                write(1, "A", 1);
            else if (*str == 'z')   
                write(1, "a", 1);
            else 
                 write(1, str, 1);
            str++;
       
        }
    }
    write(1, "\n", 1);
    return(0);
}