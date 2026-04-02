class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)
        for num in nums:
            count[num] += 1
        freq_list = []
        for num, cnt in count.items():
            freq_list.append([cnt, num])
        freq_list.sort()

        res = []
        while len(res)<k:
            print(res)
            res.append(freq_list.pop()[1])

        return res