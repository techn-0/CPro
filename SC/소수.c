#include <stdio.h>
int main()
{
    int num;
    int count = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d는 소수입니다.", num);
    }
    else
    {
        printf("%d은 소수가 아닙니다.", num);
    }

    printf("\n20204327 정휘건\n");
}