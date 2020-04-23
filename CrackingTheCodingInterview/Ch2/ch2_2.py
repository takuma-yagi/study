def Kth_from_last(ll, n):
    counter = 0
    current = ll.head
    while current:
        current = current.next
        counter += 1
    ans = ll.head
    for i in range(counter - n):
        ans = ans.next
    return ans.value
