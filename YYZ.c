#include<stdio.h>
int main()
{
    int nums[] = { 3,2,1,4,6,5,9,8,7 };
    int target = 0;
    scanf_s("%d", &target);
    int i = 0;
    int j = 0;
    while (nums[i] + nums[j] != target)
    {
        j = 0 + j;
        for (i = 0; i < 10; i++)
        {
            if (nums[i] + nums[j] == target)
            {
                break;
            }
            else { ; }


        }
        if (nums[i] + nums[j] == target)
        {
            break;
        }
        j++;

    }
    printf("[%d,%d]", i, j);
    return 0;
}