#include <unistd.h>

int main(int c, char **v)
{
if( c == 3)
{
	int tab[256] = {0};
	char *s1 = v[1];
	char *s2 = v[2];

	while(*s2)
	{
		tab[(unsigned char)*s2] = 1;
		s2++;
	}
	while(*s1)
	{
		if(tab[(unsigned char)*s1] == 1)
		{
			write(1, s1, 1);
			tab[(unsigned char)*s1] = 0;
		}
		s1++;
	}
}
write(1, "\n", 1);
return 0;
}
