#include <stdio.h>
#include <windows.h>

int main()
{
    int time = 60;
    for (time; time >= 0; time--)
    {
        printf("%d ", time);
        Sleep(1000);
    }
    printf("발사!\n");
}