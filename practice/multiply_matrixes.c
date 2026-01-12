#include "matrix.h"

void multiply_matrixes(int row, int column, t_matrix *C, t_matrix A, t_matrix B)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < column; k++)
			{
				(*C).data[i][j] += A.data[i][k] * B.data[k][j];
			}
		}
	}
}
