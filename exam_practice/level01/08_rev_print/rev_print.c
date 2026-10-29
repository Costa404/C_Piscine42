#include <unistd.h>

int main(int c, char **v)
{
    if (c == 2)
    {
        
   
        char *end= v[1];
        int i = 0;
        while (*end)
        {
            i++;
            end++;
        }
        end--;
        while (i > 0)
        {
            write(1, end, 1);
            end--;
            
            i--;
        }
      
        write(1, "\n", 1);
        return (0);
    }
    write(1, "\n", 1);
    return(0);
}