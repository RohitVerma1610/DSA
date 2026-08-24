class Solution:
    def reverse_range(self, nums, start, end):
        while start<end:
            temp = nums[start]
            nums[start] = nums[end]
            nums[end] = temp
            start +=1
            end -= 1

    def rotate(self, nums: list[int], k: int) -> None:
        """
        //striver a2z array-easy (same approach also works for left rotate)
        
        //4,3,2,1,5,6,7     rotate upto k
        //4,3,2,1,7,6,5     rotate last k
        //5,6,7,1,2,3,4     rotate whole array
        """
        n = len(nums)
        k = k%n #To avoid unnecessary rotations

        self.reverse_range(nums, 0, n-k-1)
        self.reverse_range(nums, n-k, n-1)
        self.reverse_range(nums, 0, n-1)
        