#include <stdio.h>
main()
{
    int money, pay;

    printf("과세 표준을 입력하시오(만원): ");

    scanf("%d", &money);

    if (money <= 1000)
    {
        pay = money * 0.08;
    }
    else if (money > 1000 && money <= 4000)
    {
        pay = (1000 * 0.08) + (money - 1000) * 0.17;
    }
    else if (money > 4000 && money <= 8000)
    {
        pay = (1000 * 0.08) + (3000 - 1000) * 0.17 + (money - 4000) * 0.26;
    }
    else if (money > 8000)
    {
        pay = (1000 * 0.08) + (3000 - 1000) * 0.17 + (4000) * 0.26 + (money - 8000) * 0.35;
    }
    else
    {
        printf("에러: 정수로 입력해야 합니다.\n");
    }

    printf("\n소득세는 %d만원 입니다.\n", pay);

    system("pause");
}