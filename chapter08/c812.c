/* Program to tranpose a matrix 
 */

#include <stdio.h>

void printMatrix(int row,int col,int matrix[row][col])
{
	int i, j;

	for (i = 0; i < row; i++ )
	{
		for (j = 0; j < col; j++)
		{
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
}

void transposeMatrix(int row, int col, int matrix[row][col], int temp[col][row])
{
	int i, j;

	for ( i = 0; i < row ; i++)
	{
		for ( j = 0; j < col; j++)
		{
			temp[j][i] = matrix[i][j];
		}
	}

	return;
}

int main (void)
{
	void printMatrix(int row,int col,int matrix[row][col]);
	void transposeMatrix(int row, int col, int matrix[row][col], int temp[col][row]);

	int matrix[3][4] = {
		{1,2,3,4},
		{1,2,3,4},
		{5,6,7,8}
	};
	
	int temp[4][3];

	printMatrix(3,4,matrix);
	transposeMatrix(3,4,matrix,temp);

	printMatrix(4,3,temp);

	return 0;
}
