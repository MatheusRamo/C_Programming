#include <stdio.h>
#define max 100

int exist(int arr[], int value, int k)
{
	for(int i = 0; i < k; i++)
	{
		if(arr[i] == value) return 1;
	}
	return 0;
}

void main()
{
	int p[max], r[max];
	int pl;
	printf("\nEnter the length of the array: ");
	scanf("%d", &pl);
	printf("\nEnter the elements of the array: \n");
	for(int i = 0; i < pl; i++)
	{
		scanf("%d", &p[i]);
	}

	r[0] = p[0];
	int k = 1;

	for(int i = 1; i < pl; i++)
	{
		if(!exist(r, p[i], k))
		{
			r[k] = p[i];
			k++;	
		}
	}
	
	if(k > 0)
	{
		printf("\nThe unique elements in the array are: ");
		for(int i = 0; i < k; i++)
		{
			printf("%d ", r[i]);
		}
	}
}
