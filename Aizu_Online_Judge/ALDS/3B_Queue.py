class Queue:

    def __init__(self):
        self.queue = []

    def enqueue(self, x):
        self.queue.append(x)

    def dequeue(self):
        ans = self.queue[0]
        del self.queue[0]
        return ans

    def isEmpty(self):
        return self.queue is Empty


def CPU_process(p_queue, t_queue, quantum, n):
    while p_queue.isEmpty():
        p = p_queue.dequeue()
        t = t_queue.dequeue()
        if t < quantum:
            print(p, t)
        else:
            p_queue.enqueue(p)
            t -= quantum
            t_queue.enqueue(t)


n, q = input().split()
process_queue = Queue()
time_queue = Queue()
for i in range(n):
    p, t = map(str(input().split()))
    process_queue.enqueue(p)
    time_queue.enqueue(t)
CPU_process(process_queue, time_queue, int(q), int(n))
