#include<stdio.h>
int my_strlen(char* strlen)
{
	char* start = strlen;
	char* end = strlen;
	while (end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "wanan xiaoma";
	int i = my_strlen(arr);
	printf("����Ϊ%d", i);

	return 0;
}