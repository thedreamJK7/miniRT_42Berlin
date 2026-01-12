#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>

typedef struct s_matrix
{
	int	data[2][2];
}	t_matrix;

int	determinant_of_matrix(t_matrix A);

#endif