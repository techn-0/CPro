#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int r, c;
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS] = {{9, 8, -7}, {6, -5, 4}, {-3, 2, 1}};
    int C[ROWS][COLS];

    printf("행열 덧샘");
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            C[r][c] = A[r][c] + B[r][c];
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    printf("행열 뺄샘");
}