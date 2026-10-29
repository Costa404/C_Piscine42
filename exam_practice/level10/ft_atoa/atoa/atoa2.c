
#include <stdlib.h>
int get_len(long n)
{
 	int count = 0;
 	
 	if(n == 0)
 		count++;
 	
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
	long n = nbr;
	int len = get_len(n);
	char *str;
	
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
	return NULL;
	str[len] = '\0';
	if(n == 0)
	{
		str[0] = '0';
		return str;
	}
	if(n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while(n > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return str;
}
	
	
	

		
		
















#include <stdio.h>

// Declaração da tua função ft_itoa
char	*ft_itoa(int nbr);

int main(void)
{
    char *res1;
    char *res2;
    char *res3;

    // Teste 1: Número positivo
    res1 = ft_itoa(12345);
    printf("Teste 1 (12345): %s\n", res1);
    free(res1);

    // Teste 2: Número negativo
    res2 = ft_itoa(-42);
    printf("Teste 2 (-42): %s\n", res2);
    free(res2);

    // Teste 3: Zero
    res3 = ft_itoa(0);
    printf("Teste 3 (0): %s\n", res3);
    free(res3);

    return (0);
}



