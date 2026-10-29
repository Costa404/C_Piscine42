#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int get_len(long n)
{
	int count = 0;
	if(n == 0)
		count += 1;
	if(n < 0)
	{
		count++;
		n = -n;
	}
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
	
}
char *ft_itoa(int nbr)
{
	long num = nbr;
	char *str;
	int len = get_len(n);

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return NULL;
	str[len] = '\0';
	
	if(num == 0)
	{
		str[0] = '0';
		return str;
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;

	}
	return str;
}


int main(void)
{
	printf("%s\n", ft_itoa(27));
}
