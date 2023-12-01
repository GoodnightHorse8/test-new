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
    return x* y;
}
int Div(int x, int y)
{
    return x / y;
}
int main()
{        
    int n, i, j = 0;
    int ret = 0;
    do
    {
        menu();
        printf("请选择：");
        scanf_s("%d", &n);
       
        switch (n)
        {
        case 1:
            ret = Add(i, j);
            printf("请输入：");
            scanf_s("%d%d", &i, &j);
            printf("结果为%d\n", ret);
            break;
        case 2:
            ret = Sub(i, j);
            printf("请输入：");
            scanf_s("%d%d", &i, &j);
            printf("结果为%d\n", ret);
            break;
        case 3:
            ret = Mul(i, j);
            printf("请输入：");
            scanf_s("%d%d", &i, &j);
            printf("结果为%d\n", ret);
            break;
        case 4:
            ret = Div(i, j);
            printf("请输入：");
            scanf_s("%d%d", &i, &j);
            printf("结果为%d\n", ret);
            break;
        default :
            printf("选择错误");
            break;
            }


    } while (n);
   
    return 0;
}