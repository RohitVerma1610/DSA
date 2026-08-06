class Solution:
    def productOfDigits(self, num: int) -> int:
        ans = 1
        while num>0:
            temp = num%10
            ans = ans*temp
            num = num//10

        return ans


    def smallestNumber(self, n: int, t: int) -> int:
        for i in range(n, 101):
            temp = self.productOfDigits(i)
            if temp%t == 0:
                return i

        return -1

        