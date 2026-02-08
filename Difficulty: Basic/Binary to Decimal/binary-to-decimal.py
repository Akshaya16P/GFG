class Solution:
    def binaryToDecimal(self, b):
        decimal = 0
        n = len(b)
        
        for i in range(n-1, -1, -1):
            decimal = decimal + pow(2, (n-1-i)) * int(b[i])
        
        return decimal