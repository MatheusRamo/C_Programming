/*
 * deleting from array
 *
 * We want to delete an element from an array
 */





#include <stdio.h>

#define max 100

void printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);

	}



}




int main()
{

	int array[max];
	int n, i, j, k;
	
	printf("\nEnter the length of array\n");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);

	}

	printArray(array, n);

	printf("\nEnter the position to delete\n");
	scanf("%d", &k);

	k = k - 1;

	for(j = k; j < n-1; j++)
	{
		array[j] = array[j+1];
	
	}
	
	array[n-1] = 0;

	printArray(array, n-1);







}
