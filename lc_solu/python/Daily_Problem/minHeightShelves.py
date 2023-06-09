# class Solution:
def minHeightShelves(self, books: list[list[int]], shelf_width: int) -> int:
    n = len(books)
    dp = [1000000]*(n+1)
    dp[0] = 0
    for i in range(1, n+1):
        temp_width, j, h = 0, i, 0
        while j > 0:
            temp_width += books[j-1][0]
            print(temp_width)
            if temp_width > shelf_width:
                break
            h = max(h, books[j-1][0])
            print(h)
            dp[i] = min(dp[i], dp[j-1]+h)
            print(dp[i])
            j -= 1
    return dp[-1]


books = [[1, 1], [2, 3], [2, 3], [1, 1], [1, 1], [1, 1], [1, 2]]
num = 4
k = minHeightShelves(None, books, num)
print(k)
