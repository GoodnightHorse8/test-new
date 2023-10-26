#include<stdio.h>
int Min(int x, int y)
{
	if (x < y)
		return x;
	else

		return y;
}

int main()
{
	int r = 0;
	int m = 0;
	int n = 0;
	scanf_s("%d %d", &n, &m);
	r = Min(n, m);
	while (r)
	{
		{
			if (n % r == 0 && m % r == 0)
				break;
		}
		r--;

	}

	printf("%d\n", r);
	return 0;
}