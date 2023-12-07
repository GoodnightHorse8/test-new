#include<stdio.h>
int my_cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - * (int*)e2);
}

void Swap(char* buf1, char* buf2, int width)
{
	int k = 0;
	for (k = 0; k < width; k++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
	    buf2++;
	}
}
void my_qsort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(my_cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]),my_cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}


	return 0;
}