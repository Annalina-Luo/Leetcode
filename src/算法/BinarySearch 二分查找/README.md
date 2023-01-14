## 算法：二分查找 Binary Search
- divide in the middle

** Pseudo Code **
```{c}
int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (target < nums[mid])
            right = mid - 1;
        else if (target > nums[mid])
            left = mid + 1;
        else
            return mid;
    }
    return right + 1;
```

### Examples
- [Q35. 搜索插入位置](https://github.com/Annalina-Luo/Leetcode/tree/main/%E6%AF%8F%E6%97%A5%E4%B8%80%E9%A2%98/q35.%20%E6%90%9C%E7%B4%A2%E6%8F%92%E5%85%A5%E4%BD%8D%E7%BD%AE)
