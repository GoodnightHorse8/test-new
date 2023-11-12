#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[10] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (j = 0; j < sz; j++)
	{
		scanf_s("%d", &arr[j]);
	}
	int max = arr[0];
	for (i = 1;i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}
	printf("max=%d\n", max);
	return 0;

}