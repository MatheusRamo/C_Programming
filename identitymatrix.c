#include <stdio.h>
#define max 100

void main()
{
	int matrix[max][max];
	int rows, columns;
	printf("\nHow many rows and columns are in the matrix: ");
	scanf("%d %d", &rows, &columns);
	
	if(rows != columns)
	{
		printf("\nThe matrix is not an identity matrix.\n");
	}
	else
	{
		printf("\nEnter the elements in the matrix: \n");

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				scanf("%d", &matrix[i][j]);
			}
		}

		int check = 1;
		
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				if(i == j)
				{
					if(matrix[i][j] != 1)
					{
						check = 0;
						break;
					}
				}
				else
				{
					if(matrix[i][j] != 0)
					{
						check = 0;
						break;
					}
				}
			}
		}

		if(check)
		{
			printf("\nMatrix is an identity matrix.\n");
			
			for(int i = 0; i < rows; i++)
			{
				for(int j = 0; j < columns; j++)
				{
					printf("%d ", matrix[i][j]);
				}
				printf("\n");
			}
		}
		else
		{
			printf("\nMatrix is not an identity matrix.\n");
		}


	}

}
