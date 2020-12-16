class Solution:
    def countCharacters(self, words: list[str], chars: str) -> int:
        totalCount = 0
        for i in words:
            list1 = []
            list1[:0] = chars
            list2 = []
            list2[:0] = i
            count = 0
            for j in list2:
                if j in list1:
                    count += 1
                    list1.remove(j)
            if count == len(list2):
                totalCount += count
        return totalCount

words = ["cat","bt","hat","tree"]
chars = "atach"
s = Solution()
print(s.countCharacters(words, chars))