class Solution:
    def longestKSubstr(self, s, k):
        maxlen=-1
        dic={}
        i=0
        j=0
        p=0
        while(i<=j and j<len(s)):
            if s[j] not in dic:
                p+=1
                dic[s[j]]=1
            else:
                dic[s[j]]+=1
            while(p>k and i<j):
                if dic[s[i]]==1:
                    dic.pop(s[i])
                    p-=1
                else:
                    dic[s[i]]-=1
                i+=1
            if p==k:
                maxlen=max(maxlen,j-i+1)
            j+=1
        return maxlen

