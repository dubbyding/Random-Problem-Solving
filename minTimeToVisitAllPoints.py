class Solution:
    def minTimeToVisitAllPoints(self, points: list[list[int]]) -> int:
        count = 0
        for i in range(0, len(points)-1):
            n = True
            while(n):
                if points[i][1] == points[i+1][1] and points[i][0] == points[i+1][0]:
                    n = False
                else:
                    count += 1
                if points[i][0] < points[i+1][0]:
                    points[i][0] += 1
                if points[i][0] > points[i+1][0]:
                    points[i][0] -= 1
                if points[i][1] < points[i+1][1]:
                    points[i][1] += 1
                if points[i][1] > points[i+1][1]:
                    points[i][1] -= 1
        return count

a = [[1, 1], [3, 3]]
s = Solution()
answer = s.minTimeToVisitAllPoints(a)