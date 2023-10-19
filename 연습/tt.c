#include <stdio.h>

int d[101][101], f[101][101];

int main()
{
    int i, j, N, M;
    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            printf("%d ", d[i][j] + f[i][j]);
        }
        printf("\n");
    }

    printf("");
}