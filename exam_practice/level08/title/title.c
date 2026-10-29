#include <unistd.h>
int is_space(char str)
{
	return (str >= 9 && str <= 13) || str == 32;
}

int main(int c, char **v)
{
	int i = 1;
	if (c < 2)
	{
		write(1, "\n", 1);
		return 0;
	}


	while( i < c)
	{
		char *str = v[i];

		if (*str == '\0')
		{
    			write(1, "\n", 1);
    			i++;
    			continue;
		}

		if(*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
			write(1, str, 1);
		}
		else 
			write(1, str, 1);
		char prev = *str;
		str++;
		while( *str)
		{
			if(is_space(prev) && *str >= 'a' && *str <= 'z')
				*str -= 32;

			write(1, str, 1);
			prev = *str;
			str++;
		}


		write(1, "\n", 1);
		i++;

	}
		return 0;


}
