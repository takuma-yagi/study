def selection_sort(lst, n):
    for i in range(n - 1):
        minj = i
        for j in range(i - 1):
            if lst[minj] > lst[j]:
                minj = j
        tmp = lst[i]
        lst[i] = lst[minj]
        lst[minj] = tmp
