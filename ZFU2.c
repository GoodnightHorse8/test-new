#include<stdio.h>
int my_strlen(char* strlen)
{
	if (*strlen != '\0')
	{
		return 1 + my_strlen(strlen + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "wanan xiaoma";
	int i = my_strlen(arr);
	printf("Êı×ÖÎª%d", i);

	return 0;
}