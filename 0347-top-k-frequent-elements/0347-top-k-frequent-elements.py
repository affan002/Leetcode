class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        count = defaultdict(int)
        n = len(nums)
        for num in nums:
            count[num] += 1

        bucket_arr = [[] for _ in range(n+1)]

        for key, val in count.items():
            bucket_arr[val].append(key)

        res = []

        for i in range(n, 0, -1):
            for num in bucket_arr[i]:
                res.append(num)
                if len(res) == k:
                    return res
