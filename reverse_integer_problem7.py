class Solution:
    def reverse(self, num: int) -> int:
        
        # Assigning maximun and minimum values
        MAX=2**31-1
        MIN=2**-31
        
        # Taking care of -ve integers
        sign=1
        if num<0:
            sign=-1
            num*=-1
        
        #reversed return value is stored in ret variable
        ret=0
        while num:
            ret = ret*10 + num%10
            num=num//10
            
        # Cheaking the edge conditions i.e, its a 32-bit 
        # signed integer or not if it is then return reversed
        # integer after multiplying by sign = 1 OR -1
        if MIN < ret < MAX:
            return sign*ret
        
        # returning a zero if above condition fails
        return 0
        
