#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int array1[A][B];
    int array2[A][B];
    int array3[A][B];

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
    system("pause");
}