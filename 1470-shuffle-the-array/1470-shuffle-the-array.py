class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        out = ["_"] * (2*n)
        cur = 0
        for i in range(n):
            out[cur] = nums[i]
            out[cur+1] = nums[i+n]
            cur+=2

        return out