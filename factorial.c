#include <stdio.h>
#include <math.h>

int pow3(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return pow(n, 3) + pow3(n - 1);
    }
}

int main()
{
    int n;
    printf(" 정수를 입력하시오: ");
    scanf("%d", &n);

    printf("%d\n", pow3(n));
}