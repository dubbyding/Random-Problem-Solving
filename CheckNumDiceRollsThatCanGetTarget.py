class Solution:
    def numRollsToTarget(self, d: int, f: int, target: int) -> int:
        a = []
        numRollCount = 0
        for i in range(1, d+1):
            for j in range(1,f+1):
                if j == 1:
                    b = []
                b.append(j)
            a.append(b)
        initial1 = a[0]
        initial2 = a[1]
        first = True
        n = True
        k = 2
        while(n):
            if not first:
                if k >= d:
                    n = False
                    continue
                else:
                    initial1 = val
                    initial2 = a[k]
                    k += 1
            
            val = []
            for i in range(0, len(initial1)):
                for j in range(0, len(initial2)):
                    if first:
                        val1 = [initial1[i], initial2[j]]
                        val.append(val1)
                    else:
                        val1 = initial1[i] + list(map(int, str(initial2[j])))
                        val.append(val1)
            if first:
                first = False
        for i in val:
            if sum(i) == target:
                numRollCount += 1
        return numRollCount
d = 2
f = 6
target = 7
s = Solution()
print(s.numRollsToTarget(d,f,target))