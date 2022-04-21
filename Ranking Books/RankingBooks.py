def findPos(books, i):
    l = 0
    h = len(books) - 1
    ans = -1
    while l <= h:
        m = (l + h)//2
        if books[m] <= i:
            ans = m
            l = m + 1
        else:
            h = m - 1
            
    return len(books) - ans



def findAns(books, pages, n):
    ans = []
    for i in pages:
        ans.append(findPos(books, i))
        
    return ans


for _ in range(int(input())):
    n = int(input())
    books = list(set(list(map(int, input().split()))))
    books.sort()
    m = int(input())
    pages = list(map(int, input().split()))
    ans = findAns(books, pages, n)
    for i in ans:
        print(i,end=" ")
    print()
    