#include<stdio.h>
#include<math.h>
int main()
{
	int i, j = 0;//偶数不可能为素数
	int count = 0;

	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d\n", i);
		}
		if (j > sprt(i))
		{
			count++;
			printf("%d\n", i);
		}

	}
	
	printf("%d", count);


	return 0;
}