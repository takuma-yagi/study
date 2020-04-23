#https://atcoder.jp/contests/abc001/tasks/abc001_2
def func(m):
    if m < 100 :
        return 00
    elif m >=100 and 1000 > m:
        return "0" + str(m / 100)
    elif m >=1000 and 5000 >= m:
        return m / 100
    elif m >=6000 and 30000 >= m:
        return m / 100 + 50
    elif m >=35000 and 70000 >= m:
        return (m / 100 - 30) / 5 + 80
    else:
        return 89

m = int(input())
print(func(m))
