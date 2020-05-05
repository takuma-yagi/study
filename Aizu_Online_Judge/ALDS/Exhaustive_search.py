def solve(i, m):
    if m == 0:
        return True
    if i >= m:
        return False
    res = solve(i + 1, m) or solve(i + 1, m - a[i])
    return res

n = int(input())
a = list(map(int, input().split()))
q = int(input())
M = list(map(int, input().split()))

for i in range(q):
    m = M[i]
    if(solve(0, m)):
        print ("yes")
    else:
        print ("no")
