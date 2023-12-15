#include <stdio.h>

    int main()
    {
        int n = 0;
        int i, j = 0;
        while (scanf_s("%d", &n) != EOF)
        {
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (j == i )
                        printf("*");
                    else if(i + j == n +1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }

        }





        return 0;
    }
	