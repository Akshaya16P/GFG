class Solution:
    def sortIt(self, arr):
        # Separate odd and even numbers
        odd = []
        even = []
        
        for x in arr:
            if x % 2 == 1:
                odd.append(x)
            else:
                even.append(x)
        
        # Sort odd in descending order
        odd.sort(reverse=True)
        
        # Sort even in ascending order
        even.sort()
        
        # Combine and update original array
        arr[:] = odd + even
        
        return arr
