#include<stdio.h>
int main()
{
	int i, j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d\n", i);
		}


	}



	printf("%d", count);


	return 0;
}