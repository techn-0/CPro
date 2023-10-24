int main(void)
{
    int a, b, c;

    for (a = 2; a < 100; a++)
    {
        for (b = 2; b < 100; b++)
        {
            for (c = 2; c < 100; c++)
            {
                if ((a * a) + (b * b) == (c * c))
                    printf("%d %d %d\n", a, b, c);
            }
        }
    }

    return 0;
}