#include "matrix.h"

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * Transposes a square matrix in place.
 * Requires: row == column.
 */
void transpose_matrix(int row, int column, int (*C)[column])
{
	if (row != column)
		return;
	for (int i = 0; i < row; i++)
	{
		for (int j = i; j < column; j++)
		{
			swap(&C[i][j], &C[j][i]);	
		}
	}
}
