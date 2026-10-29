#include <unistd.h>

int main(int c, char **v)
{
    if( c == 3)
    {
        char *str = v[1];
        char *ptr = v[1];
        char *str2 = v[2];
        while(*str2)
        {
            if(*str2 == *str)
                str++;
            
            str2++;
        }
        if(*str == '\0')      
            while(*ptr)
            {
                write(1, ptr, 1);
                ptr++;
            }       
    }

	
    write(1, "\n", 1);
    return 0;
}
