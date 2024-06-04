class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        rd = 0

        for i in range(n):
            if nums[i] != nums[rd]:
                rd+=1
                nums[rd] = nums[i]

        return rd+1
        
        