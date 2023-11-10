#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    printf("%d", factorial(n));

    return 0;
}