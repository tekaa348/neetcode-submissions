class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)
        ans = [0] * n
        k = -1
        for i in range(n - 1, -1, -1):
            ans[i] = k
            k = max(k, arr[i])
        return ans
