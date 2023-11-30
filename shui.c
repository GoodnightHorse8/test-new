#include<stdio.h>
int main()
{
	float i, j, sum = 0.0;

	for (i = 1; i <= 100; i++)
	{
		if ((int)i % 2 == 0)
		{
			j = (1 / i) * (-1);
		}
		else
			j = 1 / i;

		sum += j;
	}

	printf("%lf", sum);

	return 0;
}
