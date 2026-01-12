#include "matrix.h"

int	determinant_of_matrix(t_matrix A)
{
	int	det;

	det = A.data[0][0] * A.data[1][1] - A.data[1][0] * A.data[0][1];
	return (det);
}