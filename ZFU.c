#include<stdio.h>//strlen
int my_strlen(char* strlen)
{      
	int j = 0;
	while (*strlen != '\0')
	{
		j++;
		strlen++;
	}
	return j;
}
int main()
{
	char arr[] = "wanan xiaoma";
	int i = my_strlen(arr);
	printf("Êı×ÖÎª%d", i);

	return 0;
}                                                                                                                                                                                 