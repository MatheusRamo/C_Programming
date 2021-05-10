#include <stdio.h>

#define max 100

void pArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void iniArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int exist(int arr[], int value, int index)
{
	if(index == 0) return 0;
	for(int i = 0; i < index; i++)
	{
		if(arr[i] == value) return 1;
	}
	return 0;
}

void main()
{
	int p[max], q[max], r[max];
	int p_len, q_len;

	printf("\nEnter the length of the first array: ");
	scanf("%d", &p_len);
	printf("\nEnter the elements of the first array: \n");
	iniArray(p, p_len);


	printf("\nEnter the length of the second array: ");
	scanf("%d", &q_len);
	printf("\nEnter the elements of the second array: \n");
	iniArray(q, q_len);

	int index = 0;
	int i, j;
	
	for( i = 0; i < p_len; i++)
	{
		for( j = 0; j < q_len; j++)
		{
			
			if(p[i] == q[j]) break;
	
		}
		if(j == q_len)
		{
			if(!exist(r, p[i], index))
			{
				r[index] = p[i];
				index++;
			}

		}
	}

	if(index > 0)
	{
		printf("\nThe difference in the two arrays are: \n");
		pArray(r, index);
	}
	else
	{
		printf("\nThere are no difference in the two arrays.\n");
	}
}
