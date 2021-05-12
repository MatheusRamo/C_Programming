#include <stdio.h>
#define max 100
void main()
{
	int matrix[max][max];
	int rows, columns, count;
	printf("\nHow many rows and columns are in this matrix? ");
	scanf("%d %d", &rows, &columns);
	printf("\nEnter the elements in the matrix:\n");
	
	count = 0;

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] == 0) 
			{
				++count;
			}
		}
	}

	if(count > ((rows * columns)/2))
	{
		printf("\nThe given matrix is a sparse matrix.\n");
	}
	else
	{
		printf("\nThe given matrix is not a sparse matrix.\n");
	}

	printf("\nThere are %d number of zeros in the matrix.\n", count);	

}
