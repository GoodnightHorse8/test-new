#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int h = 0;
	while (scanf_s("%d%d%d", &n, &m, &h) != EOF)
	{
		if (m % n)
		{

			printf("%d\n",n-m%h );
		}
		else
		{
			
			printf("%d\n",n-m%h-1 );
		}

	}
	return 0;
}
