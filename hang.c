#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int i, j;
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS] = {{9, 8, -7}, {6, -5, 4}, {-3, 2, 1}};
    int C[ROWS][COLS];

    printf("Çà¿­ µ¡»ù\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d ", C[i][j]);
        }
        printf("\n\n");
    }

    printf("Çà¿­ »¬»ù\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%3d ", C[i][j]);
        }
        printf("\n\n");
    }

    printf("AÀÇ ÀüÄ¡Çà·Ä\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = A[j][i];
            printf("%3d ", C[i][j]);
        }
        printf("\n\n");
    }

    printf("Çà·Ä °ö¼À\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < COLS; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%3d ", C[i][j]);
        }
        printf("\n\n");
    }
}