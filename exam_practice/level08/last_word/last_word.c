#include <unistd.h>
int is_space(char str)
{
    return (str >= 9 && str <= 13) || str == 32;
}

int main(int c, char **v)
{
    if( c == 2)
    {
        char *str = v[1];
        char *start = v[1];

        while(*str)
            str++;

        str--;

        while(str >= start && is_space(*str))
            str--;
        while(str >= start && !is_space(*str))
            str--;

        str++;

        while(*str && !is_space(*str))
        {
            write(1, str, 1);
            str++;
        }

	}
    write(1, "\n", 1);
    return 0;
}
