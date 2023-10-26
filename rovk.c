#include<stdio.h>
int main()
{
	int n, a, b, c = 0;
	scanf_s("%d", &n);
	a = n/100;
	b = (n % 100) / 10;
	c = n % 10;
	n == a * a * a + b * b * b + c * c * c ? printf("Yes") : printf("No");

	return 0;
}