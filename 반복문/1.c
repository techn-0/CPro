#include <stdio.h>
#include <windows.h>

int main()
{
    int time = 60;
    for (int time = 0; time >= 0; time--)
    {
        printf("%d ", time);
        Sleep(1000);
    }
}