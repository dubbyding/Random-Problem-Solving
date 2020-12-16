class Solution:
    def restoreString(self, s: str, indices: list[int]) -> str:
        lists = []
        lists[:0] = s
        for i in range(0, len(indices)):
            for j in range(0, len(indices)-i-1):
                if indices[j] > indices[j+1]:
                    indices[j], indices[j+1] = indices[j+1], indices[j]
                    lists[j], lists[j+1] = lists[j+1], lists[j]
        s=""
        for i in lists:
            s += i
        return s
s = input("Enter Any Shuffled String")
indices = [0]*len(s)
for i in range(0,len(s)):
    print("Enter {} position".format(s[i]))
    a = int(input())
    indices[i] = a
sa = Solution()
print(sa.restoreString(s, indices))
