def findAns(s1, s2):
    d = dict()
    for i in s1:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
            
    for i in s2:
        if i in d:
            d[i] -= 1
        else:
            d[i] = -1
            
    ans = 0
    for i in d:
        ans += abs(d[i])
    return ans
        
        


for _ in range(int(input())):
    s1, s2 = input().split()
    print(findAns(s1,s2))
