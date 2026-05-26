class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        seen = set(word)
        cnt = 0
        for i in "abcdefghijklmnopqrstuvwxyz":
            if i in seen and i.upper() in seen:
                cnt+=1
        return cnt