#include<stdio.h>
#include<string.h>
int main()
{	char input[20] = {0};
system("shutdom-s-t60");
printf("��ע�⣬���ĵ������Ͻ���1����֮�ڹػ����������������ͻ�ȡ���ػ�\n�����룺");
scanf_s("%s", input);
again:
if (strcmp(input, "������") == 0)
{
	system("shutdown-a");
}
else
{
	goto again;
}


	return 0;
}