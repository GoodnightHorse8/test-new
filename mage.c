#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 5; i >1; i--)
	{
		int j = 0;
		for (j = 1; j <i; j++)
		{ 
			

			printf("%c", '*');
			

		}
		printf("\n");
	}

	return 0;
}