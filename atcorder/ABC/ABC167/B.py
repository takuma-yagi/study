a,b,c,k = map(int, input().split())

if(k == 0):
    print(0)
elif(k <= a + b):
    print(a)
elif(a + b + c == k):
    print(a - c)
else:
    print(2 * a + b - k)
