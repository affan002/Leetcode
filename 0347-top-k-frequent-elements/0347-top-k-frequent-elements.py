class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(int)
        for num in nums:
            count[num]+=1
        
        heap = []
        for key, val in count.items():
            heapq.heappush(heap, (val, key))
            if len(heap)>k:
                heapq.heappop(heap)
        
        out = []
        while (len(heap)!=0):
            out.append(heapq.heappop(heap)[1])
        
        return out
        