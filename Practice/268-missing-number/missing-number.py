class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum = 0
        for i in nums:
            sum = sum + i
        
        n = len(nums)
        Sn = int((n*(n+1))/2)

        ans = Sn - sum

        return ans

        