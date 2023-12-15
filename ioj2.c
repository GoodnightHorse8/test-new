#include <stdio.h>

int main()
{
    int num, i, j;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
            {
                if (i > 1 && i < num)
                {
                    if (j > 1 && j < num)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}