class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        hash_map = {}

        for i in range(len(nums)):
            n = nums[i]
            res = target - n 
            if n in hash_map:
                return (hash_map[n], i)
            hash_map[res] = i
        