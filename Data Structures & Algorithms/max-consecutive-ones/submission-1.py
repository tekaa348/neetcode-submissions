class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = 0
        res = 0
        for i, n in enumerate(nums):
            if n == 0:
                res = max(res, ans)
                ans = 0
            else:
                ans += 1
        return max(res, ans)
