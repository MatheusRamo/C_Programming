#include <stdio.h>


int main(void)
{

	int array[200], *max, *ptr, n;
	printf("How many elements are there? ");
	scanf("%d", &n);
	printf("\nEnter %d elements\n", n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	max = array;
	ptr = array;

	for(int j = 0; j < n; j++)
	{
		if(*max < *ptr)
		{
			max  = ptr;
		}
		ptr++;
	}

	printf("\nLargest value is %d\n", *max);




	return 0;
}
