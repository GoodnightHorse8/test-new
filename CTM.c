#include<stdio.h>
#include<time.h>
#include<string.h>
#include <stdlib.h>
void CJ()
{   
	int n = 0;
	printf("         ��ѡ��        \n");
	printf("*****1.()*******2.()***\n");
	printf("***********************\n");
	printf("***********************\n");
	printf("*****3.()*******4.()***\n");
	printf("***********************\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("�ź��ػ�����\n");
		//system("shutdown -s -t 0");
		break;
	case 2:
		printf("�ź��ػ�����\n");
		//system("shutdown -s -t 0");
		break;
	case 3:
		printf("ŷ�ʰ�,��������һ��\n");
		break;
	case 4:
		printf("�ź��ػ�����\n");
		//system("shutdown -s -t 0");
		break;
	}

}
void GC()
{
	char a[] = "conjjgratulations on your success��conjjgratulations on your success��";
	printf("\n\n\n");
	printf("%*.*s\n", 58, 21, "**********");
	printf("%*.*s\n", 61, 25, "conjjgratulations on your success��");
	printf("%*.*s\n", 63, 29, "conjjgratulations on your success��");
	printf("%*.*s\n", 65, 33, a);
	printf("%*.*s\n", 66, 35, a);
	printf("%*.*s\n", 66, 35, a);
	printf("%*.*s\n", 65, 33, a);
	printf("%*.*s\n", 64, 31, a);
	printf("%*.*s\n", 63, 29, a);
	printf("%*.*s\n", 61, 25, a);
	printf("%*.*s\n", 59, 21, a);
	printf("%*.*s\n", 57, 17, a);
	printf("%*.*s\n", 55, 13, a);
	printf("%*.*s\n", 53, 9, a);
	printf("%*.*s\n", 51, 5, a);
	printf("%*.*s\n", 50, 3, a);
	printf("%*.*s\n", 49, 1, a);

}

void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	int i = 0;
	for(i=1;i<=5;i++)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			GC();
			break;
		
		}
		if (i == 5)
		{
			printf("5�ζ�û�³�\n");
			printf("�������齱���鲻�о͹ػ�\n");
			CJ();


		}

	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);

	return 0;
}