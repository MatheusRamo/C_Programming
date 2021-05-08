/*
 * Multiplying two matrices
 */




#include <stdio.h>

void printMatrix(int matrix[][3], int rows, int columns)
{

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("%d ", matrix[i][j]);


		}
		printf("\n");

	}



}

void initMatrix(int matrix[][3], int rows, int columns)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			scanf("%d", &matrix[i][j]);

		}

	


	}


}


int main()
{

	int matrixOne[2][3];
	int matrixTwo[3][3];
	int matrixResult[2][3];

	printf("\nEnter the elements of the first matrix:\n");
	initMatrix(matrixOne, 2, 3);

	printf("\nEnter the elements of the second matrix: \n");
	initMatrix(matrixTwo, 3, 3);


	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matrixResult[i][j] = 0;

			for(int k = 0; k < 3; k++)
			{
				matrixResult[i][j] = matrixResult[i][j] + matrixOne[i][k] * matrixTwo[k][j];

			}

		}


	}
	
	printf("\nThe elements of matrix One is: \n");
	printMatrix(matrixOne, 2, 3);


	printf("\nThe elemnets of matrix two is: \n");
	printMatrix(matrixTwo, 3, 3);

	printf("\nThe Matrix result is: \n");
	printMatrix(matrixResult, 2, 3);

	return 0;



}
