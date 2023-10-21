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
	printf("每天进步一点点，一年之后%f\n", a);
	printf("每天退步一点点，一年之后%f\n", b);
	return 0;

}