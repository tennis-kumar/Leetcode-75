class Solution:
    def isVowel(self, c: str) -> bool:
        return c in 'aeiouAEIOU'

    def reverseVowels(self, s: str) -> str:
        i, j = 0, len(s) - 1
        s = list(s)

        while i < j:
            while i < j and not self.isVowel(s[i]):
                i += 1
            while i < j and not self.isVowel(s[j]):
                j -= 1
            s[i], s[j] = s[j], s[i]
            i += 1
            j -= 1

        return ''.join(s)
