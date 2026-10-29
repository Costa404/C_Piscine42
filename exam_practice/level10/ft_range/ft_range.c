#include <stdlib.h>

int *ft_range(int start, int end)
{
   int size;
   int *arr;
   int i = 0;
   int step;	
   if(start >= end)
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
   if(!arr)
	   return NULL;
   while(i < size)
   {
		arr[i] = start;		
		start += step;
		i++;
   }
	return arr;
   
} 

#include <stdio.h>



int main(void)
{
    int *arr = ft_range(6, 1);
    int *arr1 = ft_range(1, 6);
    printf("%d, %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
    printf("%d, %d, %d, %d, %d, %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4], arr1[5]);
    free(arr);

    return (0);
}
