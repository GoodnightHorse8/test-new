#include<stdio.h>

//void my_qsort(int arr[], int sz)
//{
//	int i, j = 0;
//	for (j = 0; j < sz - 1; j++)//总躺数
//	{
//		int flag = 1;
//		for (i = 0; i < sz - 1 - j; i++)
//		{
//			int ret = 0;
//			if (arr[i] < arr[i + 1])
//			{
//
//				ret = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = ret;
//				int flag = 0;
//
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//
//	}
//
//}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);//结果大于0才会换
}

int main()
{
	int i = 0;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz,sizeof(arr[0]),cmp_int );
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}