#include <stdio.h>
#define max 100

void initarray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void main()
{
	int p[max], q[max], r[max];
	int pl, ql;

	printf("\nEnter the length of the first array: ");
	scanf("%d", &pl);
	printf("\nEnter %d elements of the first array in sorted order:\n", pl);
	initarray(p, pl);

	printf("\nEnter the length of the second array: ");
	scanf("%d", &ql);
	printf("\nEnter %d elements of the second array in sorted order:\n", ql);
	initarray(q, ql);

	int i, j, k;
	i = j = k = 0;

	while((i < pl) && (j < ql))
	{
		if(p[i] < q[j])
		{
			r[k] = p[i];
			k++;
			i++;	
		}
		else
		{
			if(p[i] > q[j])
			{
				r[k] = q[j];
				k++;
				j++;
			}
			else
			{
				r[k] = p[i];
				k++;
				i++;
				r[k] = q[j];
				k++;
				j++;
			}

		} 
	}

	while(i < pl)
	{
		r[k] = p[i];
		k++;
		i++;
	}

	while(j < ql)
	{
		r[k] = q[j];
		k++;
		j++;
	}

	printf("\nThe combined sorted array is: \n");

	for(int i = 0; i < k; i++)
	{
		printf("%d ", r[i]);
	}

}
