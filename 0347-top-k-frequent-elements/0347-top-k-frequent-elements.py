class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)
        for num in nums:
            count[num]+=1
        
        my_list = []
        for key, val in count.items():
            my_list.append((val,key))
        my_list.sort()

        out = []
        for i in range(k):
            out.append(my_list.pop()[1])
        
        return out
        