#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬���ĵ������Ͻ���1����֮�ڹػ����������������ͻ�ȡ���ػ�\n�����룺");
	scanf_s("%s", input);
again:
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}


	return 0;
}