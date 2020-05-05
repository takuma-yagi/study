n, k = map(int, input().split())
hash_list = [False for i in range(n)]

for i in range(k):
    d = int(input())
    okashi_list = list(map(int,input().split()))
    for j in range(d):
        having = okashi_list[j] - 1
        if not hash_list[having]:
            hash_list[having] = True

count = 0
for i in range(n):
    if not hash_list[i]:
        count += 1


print(count)
