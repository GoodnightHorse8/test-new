#include<stdio.h>
int main
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m%n)
	{
		r = m % n;
		m = n;
		n = r;

	}
	printf("%d\n", n);

	return 0;
}