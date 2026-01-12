#include "matrix.h"

void print_matrix(int row, int column, t_matrix A)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%i ", A.data[i][j]);
		}
		printf("\n");
	}
}
