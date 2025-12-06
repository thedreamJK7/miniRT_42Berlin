#include <stdio.h>

void print_matrix(int row, int column, int C[row][column])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
}

void multiply_matrixes(int row, int column, int (*C)[column], int A[row][column], int B[row][column])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < column; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void transpose_matrix(int row, int column, int (*C)[column])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = i; j < column; j++)
		{
			swap(&C[i][j], &C[j][i]);	
		}
	}
}

int main(int argc, char const *argv[])
{
	int A[4][4] = {
		{0, 1, 2, 4},
		{-1, 2, 4, 8},
		{-2, -4, 8, 16},
		{-4, -8, -16, 32}
	};
	int B[3][1] = {{0}, {-1}, {-2}};
	int identity_matrix[4][4] = {0};
	identity_matrix[0][0] = 1;
	identity_matrix[1][1] = 1;
	identity_matrix[2][2] = 1;
	identity_matrix[3][3] = 1;
	int C[4][4] = {0};
	
	multiply_matrixes(4, 4, C, A, identity_matrix);
	printf("====================== A matrix ===============\n");
	print_matrix(4, 4, A);
	printf("====================== B matrix ===============\n");
	print_matrix(4, 4, identity_matrix);
	printf("====================== C matrix ===============\n");
	print_matrix(4, 4, C);
	printf("====================== A matrix t ===============\n");
	transpose_matrix(4, 4, A);
	print_matrix(4, 4, A);
	return (0);
}
