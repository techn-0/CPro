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
    printf(" ������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    printf("%d\n", pow3(n));
}