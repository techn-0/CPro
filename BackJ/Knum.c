#include <stdio.h>
#include <math.h>
int main()
{
    int Array[5];
    int sum = 0, num = 0;

    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++)
    {
        scanf("%d", &Array[i]);
        sum += pow(Array[i], 2);
    }
    num = sum % 10;
    printf("%d\n", num);

    return 0;
}