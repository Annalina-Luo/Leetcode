#include <stdio.h>
#include <stdlib.h>

int searchInsert(int *nums, int numsSize, int target)
{
    int mid = numsSize / 2;
    if (target < nums[mid])
    {
        search(*nums, 0, mid, target);
    }
    else
        search(*nums, mid, numsSize, target);
}

int search(int *nums, int start, int end, int target)
{
    return 0
}
