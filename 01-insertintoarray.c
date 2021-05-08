/*
 *Inserting an element in an array
 *
 *You can define the length of the array and also
 *specify the location where you want the new value to be
 *inserted. The program will display the array after the value has been inserted
 *
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



	printf("The length of the array: \n");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);

	}


	printf("\nArray before insertion: \n");
	printArray(array, n);

	printf("\nEnter position where to insert: \n");
	scanf("%d", &k);
	
	k = k - 1;

	for(j = n; j >= k; j--)
	{
		array[j] = array[j-1];
	}

	printf("\nEnter the value to insert: \n");
	scanf("%d", &array[k]);
	
	printf("\nArray after insertion: \n");
	printArray(array, n + 1);



	return 0;
}
