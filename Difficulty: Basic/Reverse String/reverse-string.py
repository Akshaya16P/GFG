def reverseString(s):
    #code here
    #return s[::-1]
    l = len(s)
    r = []
    i = l-1
    while i >= 0:
        r.append(s[i])
        i -= 1
    return "".join(map(str, r))