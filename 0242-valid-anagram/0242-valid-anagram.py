class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        if len(s) == 1 and len(t) == 1:
            return s==t

        hash_s = {}
        hash_t = {}
        for c in s:
            hash_s[c] = hash_s.get(c,0)+1
        for c in t:
            hash_t[c] = hash_t.get(c,0)+1
        
        return hash_s == hash_t