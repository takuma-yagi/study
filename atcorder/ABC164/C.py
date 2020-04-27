
def howManyPresent(N):
    seen = []
    for i in range(N):
        p = str(input())
        seen.append(p)
    return len(set(seen))


N = int(input())

print(howManyPresent(N))
