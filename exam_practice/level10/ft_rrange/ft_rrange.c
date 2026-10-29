#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
    int *arr;
    int size;
    int i = 0;
    int step = 1;

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
    arr = malloc(sizeof(int) * size);
	if(arr == NULL)
		return NULL;
	while( size > i)
	{
		arr[i] = end;
		end -= step;
		i++;

	}
	return arr;

}




int main(void)
{
    int *arr = ft_rrange(3, 1);
    printf("%d, %d, %d \n", arr[0], arr[1], arr[2]);
    free(arr);

    return (0);
}
