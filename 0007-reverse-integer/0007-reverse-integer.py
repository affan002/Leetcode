import math
class Solution:
    def reverse(self, x: int) -> int:
        MIN =-2147483648
        MAX = 2147483648
        
        out = 0
        while x:
            digit = int(math.fmod(x,10))
            x=int(x/10)
            
            if out > MAX//10 or (out == MAX//10 and digit > MAX%10):
                return 0
            if out < MIN//10 or (out == MIN//10 and digit < MIN%10):
                return 0
            
            out = out*10 + digit
            

        return out
