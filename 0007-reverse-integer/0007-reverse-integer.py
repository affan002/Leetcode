import math
class Solution:
    def reverse(self, x: int) -> int:
        MIN =-2147483648
        MAX = 2147483648
        
        out = 0
        while x:
            digit = int(math.fmod(x,10))
            x=int(x/10)
            
            out = out*10 + digit
            
        if out > MAX or out < MIN:
                return 0

        return out
