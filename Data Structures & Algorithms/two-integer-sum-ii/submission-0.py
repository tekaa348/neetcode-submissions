class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i, n in enumerate(nums):
            need = target - n
            if need in hashmap:
                return [hashmap[need] + 1, i + 1]
            hashmap[n] = i
        