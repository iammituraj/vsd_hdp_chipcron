//*****************************************************************//
// Program     : Matrix multiplication
// Description : Program to multiply two matrices
// Developer   : Mitu Raj
// Date        : 23-07-2024
//*****************************************************************//
// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Macros to set rows and columns of Matrix-1 and Matrix-2
#define R1 2  // Number of rows in Matrix-1
#define C1 2  // Number of columns in Matrix-1
#define R2 2  // Number of rows in Matrix-2
#define C2 2  // Number of columns in Matrix-2

//** User defined functions **//
// Function to multiply matrices and display the product
void mulMat(int mat1[][C1], int mat2[][C2], int prod_mat[][C2])
{
	for (int i=0; i<R1; i++) {
		for (int j=0; j<C2; j++) {
			prod_mat[i][j] = 0;
			for (int k=0; k<C1; k++) {
				prod_mat[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
}

// Function to display matrix
void disp_mat (int rows, int cols, int *mat)
{
	for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d\t", *(mat + (i * cols) + j));
        }
        printf("\n");
    }
}

//** Main **//
int main()
{
    // Local variables
	clock_t start_time, end_time, pgm_time ;

	// Define input matrices
	int mat1[R1][C1] = {
		                  { 1, 1 },
						  { 2, 2 }
					   };

	int mat2[R2][C2] = {
		                  { 1, 1 },
						  { 2, 2 }
					   };
	int prod_mat[R1][C2];

	printf("Matrix-1:\n");
    disp_mat(R1, C1, &mat1[0][0]);
    printf("Matrix-2:\n");
    disp_mat(R2, C2, &mat2[0][0]);

    // Validate the matrix dimensions
	if (C1 != R2) {
		printf("The number of columns in Matrix-1 must be "
			"equal to the number of rows in "
			"Matrix-2\n");
		exit(EXIT_FAILURE);
	}

    // Log start time
    start_time = clock();

	// Derive the product
	mulMat(mat1, mat2, prod_mat);

	// Log end time
    end_time = clock();

	printf("Product of matrices:\n");
    disp_mat(R1, C1, &prod_mat[0][0]);

    // Print execution time
    pgm_time = ((end_time - start_time)*1000000.0)/CLOCKS_PER_SEC ;
    printf("Total time taken = %ldus\n", pgm_time);

	return 0;
}
