
#Strategy using hash
def delDups_hash(ll):
    if ll.head is None:
        return
    current = ll.head
    seen = set([current.value])
    while current.next:
        if current.next.value in seen:
            current.next = current.next.next
        else:
            seen.add(current.next.value)
            current = current.next
    return ll

#runner
def delDups_runner(ll):
    if ll.head is None:
        return
    current = ll.head
    while current:
        runner = current.next
        while runner:
            if current.value == runner.value:
                current.next = current.next.next
            runner = runner.next
        current = current.next
    return ll
