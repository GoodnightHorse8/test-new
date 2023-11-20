#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	int ret = 1;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		int j = 0;
		for (j = 1; j < i + 1; j++)
		{
			
			ret = ret*j;


		}
		sum = sum + ret;
		ret = 1;
	}
	printf("%d", sum);
	return 0;
}