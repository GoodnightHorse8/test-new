#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，您的电脑马上将在1分钟之内关机，请输入我是猪，就会取消关机\n请输入：");
	scanf_s("%s", input);
again:
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}


	return 0;
}