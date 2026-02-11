class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        map = {}
        out = []
        for st in strs:
            sorted_st = "".join(sorted(st))

            if sorted_st not in map:
                map[sorted_st] = [st]
            else:
                map[sorted_st].append(st)
        
        for key, value in map.items():
            cur = []
            for v in value:
                cur.append(v)
            out.append(cur)
        
        return out