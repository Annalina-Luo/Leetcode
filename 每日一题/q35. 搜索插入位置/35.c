#include <stdio.h>
#include <stdlib.h>

int searchInsert(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int mid = (left + right) / 2;

    // dividing at half
    while (left <= right)
    {
        if (target < nums[mid])
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else
            return mid;
    }
    return right + 1;
}

int main()
{
    int nums1[] = {1, 3, 5, 6};
    int numsSize1 = 4;
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    printf("%d", searchInsert(&nums1, numsSize1, target3));
}