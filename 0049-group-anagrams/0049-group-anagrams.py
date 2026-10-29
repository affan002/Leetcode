class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        final_map = defaultdict(list)
        for str in strs:
            count = [0] * 26
            for c in str:
                count[ord(c)-ord('a')] += 1
            final_map[tuple(count)].append(str)
        
        return list(final_map.values())
            


         