#include <unistd.h>
int is_space(char str)
{
    return (str >= 9 && str <= 13) || str == 32;
}

int main(int c, char **v)
{
    if( c == 4)
    {
        
        char *str = v[1];
        char *str2 = v[2];
        char *str3 = v[3];
        if(str2[1] != '\0' || str3[1] != '\0')
        {
            write(1, "\n", 1);
            return 0;
        }

        while(*str)
        {
            if(*str == *str2)
               write(1, str3, 1);
            else 
                write(1, str, 1);
            str++;
            
        }
    }

       

	
    write(1, "\n", 1);
    return 0;
}
