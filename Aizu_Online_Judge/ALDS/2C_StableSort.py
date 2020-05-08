def bubble_sort(lst, n):
    num_lst = list(map(IsNum,lst))
    count = 0
    for i in range(n - 1):
        for j in range(i - 1):
            if num_lst[j] > num_lst[j + 1]:
                swap(num_lst[j], num_lst[j + 1])
                swap(lst[j], lst[j + 1])
                count += 1
    return lst

def selection_sort(lst, n):
    num_lst = list(map(IsNum,lst))
    count = 0
    for i in range(n - 1):
        minj = i
        for j in range(n - i):
            if num_lst[minj] > num_lst[j + i]:
                minj = j + i
        if minj != i:
            swap(num_lst[minj], num_lst[i])
            swap(lst[minj], lst[i])
            count += 1
    return lst

def IsNum(str):
    return int(str[1])

def swap(val1, val2):
    tmp = val1
    val1 = val2
    val2 = tmp

def isStable(lst):
    if:
        return "Stable"
    else:
        return "Not stable"


n = int(input())
lst = list(map(str,input().split()))
num_list = list(map(IsNum,lst))
print(num_list)
