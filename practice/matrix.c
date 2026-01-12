#include "matrix.h"

int main(int argc, char const *argv[])
{
	// int A[4][4] = {
	// 	{0, 1, 2, 4},
	// 	{-1, 2, 4, 8},
	// 	{-2, -4, 8, 16},
	// 	{-4, -8, -16, 32}
	// };
	// int B[3][1] = {{0}, {-1}, {-2}};
	// int identity_matrix[4][4] = {0};
	// identity_matrix[0][0] = 1;
	// identity_matrix[1][1] = 1;
	// identity_matrix[2][2] = 1;
	// identity_matrix[3][3] = 1;
	// int C[4][4] = {0};
	
	// multiply_matrixes(4, 4, C, A, identity_matrix);
	// printf("====================== A matrix ===============\n");
	// print_matrix(4, 4, A);
	// printf("====================== B matrix ===============\n");
	// print_matrix(4, 4, identity_matrix);
	// printf("====================== C matrix ===============\n");
	// print_matrix(4, 4, C);
	// printf("====================== A matrix t ===============\n");
	// transpose_matrix(4, 4, A);
	// print_matrix(4, 4, A);
	t_matrix M;
	M.data[0][0] = 1;
	M.data[0][1] = 5;
	M.data[1][0] = -3;
	M.data[1][1] = 2;
	printf("Determinant: %d\n", determinant_of_matrix(M));
	return (0);
}
