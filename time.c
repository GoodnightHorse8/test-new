#include<stdio.h>
int main()
{
	int seconds = 0;
	int h = 0;
	int m = 0;
	int s = 0;
	scanf_s("%d", &seconds);
	
	h = seconds / 60 / 60;
	m = seconds / 60 % 60;
	s = seconds % 60;
	
	printf("%d %d %d", &h, &m, &s);
	return 0;
}