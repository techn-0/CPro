#include <stdio.h>

long int fact(int);

int main()
{
    int n, r;
    printf("정수입력: ");
    scanf("%d", &n);
    r = fact(n);
    printf("%d", r);
}

long int fact(int n)
{
    int v;
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        v = n * fact(n - 1);
        return v;
    }
}