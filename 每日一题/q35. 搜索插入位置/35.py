class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left = 0
        right = len(nums)-1
        while left <= right:
            mid = (int)((left+right)/2)
            if target < nums[mid]:
                right = mid-1
            elif target > nums[mid]:
                left = mid+1
            else:
                return mid
        return right+1


if __name__ == "__main__":
    nums = [1, 3, 5, 6]
    target = 5
    sol1 = Solution()
    print(sol1.searchInsert(nums, target))
