#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int i, j;

    printf("Enter 9 numbers for the 3x3 matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
	 {
        int sum = 0;

        for (j = 0; j < 3; j++) 
		{
            sum += matrix[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
