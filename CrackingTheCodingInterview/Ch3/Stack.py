class Stack:

    def __init__(self):
        self.stack = []

    def __str__(self):
        lst = [str(x) for x in self.stack]
        return lst

    def push(self, value):
        self.stack.append(value)

    def pop(self, value):
        return self.stack.pop()

    def peek(self):
        return self.stack[0]
