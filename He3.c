#include <stdio.h>
void menu()
{
    printf("********************\n");
    printf("***1.add    2.sub***\n");
    printf("*********0.exit********\n");
    printf("***3.mul    4.div***\n");
    printf("********************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}


int main()
{
    int n = 0;
    int (*arr[5])(int, int)={ 0,Add, Sub, Mul, Div };
    int i, j = 0;
    int ret = 0;
   
    do
    {
        menu();
        printf("ÇëÑ¡Ôñ£º");
        scanf_s("%d", &n);
        if (n == 0)
        {
            printf("ÍË³öÓÎÏ·");
        }
        else if (n >= 1 && n <= 4)
        {
            printf("ÇëÊäÈë£º");
            scanf_s("%d%d", &i, &j);
            ret = (*arr[n])(i, j);
            printf("%d\n", ret);
        }
        else
        {
            printf("Ñ¡Ôñ´íÎó");

        }


    } while (n);

    return 0;
}
