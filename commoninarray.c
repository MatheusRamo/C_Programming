#include <stdio.h>

void initArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);

	}



}

void printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);

	}



}

int exist(int array[], int value, int v)
{
	if(v == 0) return 0;
	for(int i = 0; i < v; i++)
	{
		if(array[i] == value) return 1;
	}

	return 0;
}

void main()
{

	int p[100], q[100], r[100];
	int p_length, q_length, k = 0;
	printf("The length of the first array: ");
	scanf("%d", &p_length);
	printf("\nElements of the first array: \n");
	initArray(p, p_length);


	printf("The length of the second array: ");
	scanf("%d", &q_length);
	printf("\nElements of the second array: \n");
	initArray(q, q_length);


	for(int i = 0; i < p_length; i++)
	{
		for(int j = 0; j < q_length; j++)
		{
			if(p[i] == q[j])
			{
				if(!exist(r, p[i], k))
				{
					r[k] = p[i];
					k = k + 1;
				}

			}
		}


	}
	
	if(k > 0)
	{
		printf("The common elements in the two arrays are: \n");
		printArray(r, k);
	}
	else
	{
		printf("\nThere are no common elements in the two arrays\n");
	}


}
