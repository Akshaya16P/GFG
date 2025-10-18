class Solution:
    def checkStatus(self, a: int, b: int, flag: bool) -> bool:
        one_non_negative = (a >= 0) != (b >= 0)
        
        cond_1 = one_non_negative and not flag

        cond_2 = (a < 0 and b < 0) and flag

        return cond_1 or cond_2