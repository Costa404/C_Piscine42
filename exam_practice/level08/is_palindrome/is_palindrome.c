#include <unistd.h>

int main(int c, char **v)
{
    if( c == 2)
    {
        char *str = v[1];
		char *left = v[1];
        char *right = v[1];
	    while(*right)
            right++;
        right--;
        while(left < right)
		{
            if(*left != *right)
            {
                write(1, "\n", 1);
                return (0);
            }

            left++;
            right--;
		}
        while(*str)
        {
            write(1, str, 1);
            str++;
        }
        
	}
    write(1, "\n", 1);
    return 0;
}
