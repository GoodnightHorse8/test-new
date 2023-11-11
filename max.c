#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[] = { 1,2,3,7,10,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
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