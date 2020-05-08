def bubble_sort(lst, n):
    count = 0
    for i in range(n - 1):
        for j in range(i - 1):
            if lst[j] > lst[j + 1]:
                tmp = lst[j]
                lst[j] = lst[j + 1]
                lst[j + 1] = tmp
                count += 1
    print(lst)

def bubbleSort_2(A, N):
    cnt = 0
    flag = 1
    while flag:
        flag = 0
        for j in range(N - 1, 0, -1):
            if A[j][1] < A[j - 1][1]:
                A[j], A[j - 1] = A[j - 1], A[j]
                flag = 1
                cnt = cnt + 1
    return cnt

n = int(input())
lst = list(map(int,input().split()))
