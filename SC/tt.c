#include <stdio.h>

int main()
{
    int i = 0;
    for (;;)
    {
        i++;
        if (i > 7)
            break;
        if (i < 3)
            continue;
        printf("%d\n", i);
    }
}