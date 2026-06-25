class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n = len(arr)
        ans = [0] * n
        for i in range(n):
            k = -1
            for j in range(i + 1, n):
                k = max(k, arr[j])
            ans[i] = k
        return ans