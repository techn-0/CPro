#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int bets, win, cash;
    double rate;

    printf("초기 금액 $50\n");
    printf("목표 금액 $250\n");
    bets = 0;
    win = 0;
    cash = 50;

    while (1)
    {
        bets++;
        if ((double)rand() / RAND_MAX < 0.5)
        {
            cash++;
            win++;
        }
        else
            cash--;

        if (cash == 0 || cash == 250)
            break;
    }

    rate = ((double)win / (double)bets) * 100;
    printf("%d 중의 %d번 승리\n", bets, win);
    printf("이긴 확률=%lf", rate);

    return 0;
}