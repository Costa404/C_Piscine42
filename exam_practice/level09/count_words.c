int count_words(char *str)
{
	char prev = 32;
	int count = 0;
	while(*str)
	{
		if(*str > 32 && (prev == 32 || prev == 9))
			count++;
		prev = *str;
		str++; 
	}
	return count;
}
#include <stdio.h>
int main(void)
{
	printf("%i\n", count_words(""));
}

