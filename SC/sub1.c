#include <stdio.h>
int main()
{
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n%d는 짝수입니다.\n", num);
    }
    else
    {
        printf("\n%d는 홀수입니다.\n", num);
    }

    system("pause");
}