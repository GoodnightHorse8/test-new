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
void GN(int(*p)(int, int))
{
    int i, j = 0;
    int ret = 0;
    printf("�����룺");
    scanf_s("%d%d", &i, &j);
    ret = (*p)(i, j);
    printf("���Ϊ%d\n", ret);

}

int main()
{
    int n= 0;
    
    do
    {
        menu();
        printf("��ѡ��");
        scanf_s("%d", &n);

        switch (n)
        {
        case 1:
            GN(Add);
           
            break;
        case 2:
            GN(Sub);
           
            break;
        case 3:
            GN(Mul);
           
            break;
        case 4:
            GN(Div);

            break;
        default:
            printf("ѡ�����");
            break;
        }


    } while (n);

    return 0;
}