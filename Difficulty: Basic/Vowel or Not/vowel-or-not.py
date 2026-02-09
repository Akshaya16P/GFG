class Solution:
    def isVowel(ob, c):
        vowels = ["a", "e", "i", "o", "u"]
        
        return "YES" if c.lower() in vowels else "NO"