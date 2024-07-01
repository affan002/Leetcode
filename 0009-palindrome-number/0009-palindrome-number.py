class Solution:
    def isPalindrome(self, x: int) -> bool:
        compare = x
        revNum = 0
        while x > 0:
            lastdigit = x%10
            x = int(x/10)
            revNum = (revNum * 10)  + lastdigit
            
        return revNum == compare
        