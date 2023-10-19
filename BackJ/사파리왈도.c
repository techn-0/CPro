#include <stdio.h>

int main()
{
    long long N, M, A;
    scanf("%lld %lld", &N, &M);

    if (N > M)
    {
        printf("%lld\n", N - M);
    }

    else if (M > N)
    {
        printf("%lld\n", M - N);
    }
    else
    {
        printf("0");
    }

    getchar();
    system("pause");
    return 0;
}