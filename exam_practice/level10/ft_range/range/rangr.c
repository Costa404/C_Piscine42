char *ft_range(int start, int end)
{
	int size;
	int step;
	char *str;
	int i;
	
	if(start > end)
	{
		size = start - end + 1;
		step = -1;
	}
	else
	{
		size = end - start + 1;
		step = 1;
	}
	str = malloc(sizeof(int) * (size + 1);
	if(!str)
		return NULL;

	while(i < size)
	{
		str[i] = start;	
		start += step;
		
		i++;
	}

	return str; 
