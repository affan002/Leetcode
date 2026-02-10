class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False

        arr = [0] *26
        for i in range(len(s)):
            ind_s = ord(s[i]) - ord('a')
            ind_t = ord(t[i]) - ord('a')

            arr[ind_s] +=1
            arr[ind_t] -=1

        for val in arr:
            if val!=0: return False
        return True