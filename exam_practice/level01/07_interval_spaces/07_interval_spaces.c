#include <unistd.h>

int main(int c, char **v)
{
    if (c == 2)
    {
        int i = 0;
        char *str = v[1];
        while(*str)
        {
        	if(i > 0)
        		write(1, "   ", 3);
        	write(1, str, 1);
        	i++;
        	str++;
    	}
    }
    write(1, "\n", 1);
    return(0);
}
