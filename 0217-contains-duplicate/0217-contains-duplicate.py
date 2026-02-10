class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        my_set = set(nums)
        return len(my_set) < len(nums)