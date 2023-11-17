#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	
	scanf_s("%d %d", &a, &b);
	
	int sum = (a%100 + b%100)%100;
	//int sum=(a+b)%100;
	
	printf("%d\n", sum);
	return 0;
}