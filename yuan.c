#include<stdio.h>
int main()
{
	int i = 0;
	float a = 1.0, b = 1.0;
	for (i = 1; i <= 365; i++)
	{
		a = a * (1.0 + 0.01);
		b = b * (1.0 - 0.01);
	}
	printf("ÿ�����һ��㣬һ��֮��%f\n", a);
	printf("ÿ���˲�һ��㣬һ��֮��%f\n", b);
	return 0;

}