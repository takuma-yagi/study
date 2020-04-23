class Queue:

    def __init__(self):
        self.queue = []

    def add(self, value):
        self.queue.append(value)

    def delete(self):
        answer = self.queue[0]
        del self.queue[0]
        return answer

    def peek(self):
        return self.queue[0]

    def IsEmpty(self):
        return len(self.queue) == 0
