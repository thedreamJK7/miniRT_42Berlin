#include <stdio.h>

void print_matrix(int row, int column, int C[row][column])
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < column; j++)
		{
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int A[2][2] = {0};
	int B[2][2] = {0};
	int C[2][2] = {0};
	A[0][0] = 1;
	A[0][1] = 2;
	A[1][0] = 3;
	A[1][1] = 4;
	B[0][0] = 5;
	B[0][1] = 6;
	B[1][0] = 7;
	B[1][1] = 8;
	for (size_t row = 0; row < 2; row++)
	{
		for (size_t column = 0; column < 2; column++)
		{
			C[row][column] = A[row][0] * B[0][column] + A[row][1] * B[1][column];
		}
	}
	printf("====================== A matrix ===============\n");
	print_matrix(2, 2, A);
	printf("====================== B matrix ===============\n");
	print_matrix(2, 2, B);
	printf("====================== C matrix ===============\n");
	print_matrix(2, 2, C);
	return (0);
}
