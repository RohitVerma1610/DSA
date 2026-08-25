class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = 0
        n = len(nums)

        for i in range(n):
            if nums[i]==0:
                count += 1
            else:
                nums[i-count] = nums[i]

        while count>0:
            nums[n-count] = 0
            count -=1
        