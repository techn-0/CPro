#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int bets, win, cash;
    double rate;

    printf("�ʱ� �ݾ� $50\n");
    printf("��ǥ �ݾ� $250\n");
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
    printf("%d ���� %d�� �¸�\n", bets, win);
    printf("�̱� Ȯ��=%lf", rate);

    return 0;
}