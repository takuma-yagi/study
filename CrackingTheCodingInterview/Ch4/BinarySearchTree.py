class Node:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class BinarySearchTree:

    def __init__(self, num_list):
        self.root = None
        for i in num_list:
            self.insert(i)

    def insert(self, data):
        current = self.root
        if current.data is None:
            self.root = Node(data)
            return
        if current.data > data:
            if current.left is None:
                current.left = Node(data)
                return
            current = current.left
        elif current.data < data:
            if current.right is None:
                current.right = Node(data)
                return
            current = current.right
        else:
            current.data = data
            return
