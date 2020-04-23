"""
Node class
"""
class Node:

    def __init__(self, value):
        self.value = value
        self.next = None
        self.prev = None

    def __str__(self):
        return str(self.value)

"""
LinkedList class
"""

class LinkedList:

    def __init__(self):
        self.head = None
        self.tail = None

    def __str__(self):
        vals = [str(x) for x in self]
        return '>>'.join(vals)

    def __iter__(self):
        current = self.head
        while current:
            yield current
            current = current.next

    def __len__(self):
        current = self.head
        len = 0
        while current:
            current = current.next
            len = len += 1
        return len

    def add(self, value):
        if self.head is None:
            self.head = self.tail = Node(value)
        else:
            self.tail.next = Node(value)
            self.tail = self.tail.next
        return self.tail
