#https://atcoder.jp/contests/abc017/tasks/abc017_1
def point(s,e):
    p = s * e /10
    return p
s,e=input().split()
point(s,e)
P = 0
for i in range(3):
    s, e = map(int, input().split())
    P = P + point(s, e)
