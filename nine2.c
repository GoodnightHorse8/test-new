#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 10 == 9)
			count++;
		else if (i / 10 == 9)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}