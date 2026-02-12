class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        map = defaultdict(list)

        for str in strs:
            count = [0] * 26
            for i in range(len(str)):
                count[ord(str[i])-ord('a')] += 1
            map[tuple(count)].append(str)
        
        return list(map.values())