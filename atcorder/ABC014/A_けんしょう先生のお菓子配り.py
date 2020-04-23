#https://atcoder.jp/contests/abc014/tasks/abc014_1
a = int(input())
b = int(input())

if a > b:
    print(b - a % b)
elif a == b:
    print(0)
else:
    print(b - a)
