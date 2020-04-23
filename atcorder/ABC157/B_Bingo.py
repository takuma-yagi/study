#https://atcoder.jp/contests/abc157/tasks/abc157_b
l = [list(map(int,input().split()) for i in range(3)]
n = int(input)
def search():
    b = int(input())
    for i in range(n):
        for j in range(3):
            if l[i][j] == b:
                l[i][j] = -1

def output():
    #ナナメのビンゴを探索
    if l[1][1] == l[2][2] == l[3][3] == -1 or l[1][3] == l[2][2] == l[3][1] == -1:
        print("Yes")
    else:
        for i in range(3):　#縦・横のビンゴを探索
            if l[i][:] == [-1,-1,-1] or l[:][i] == [-1,-1,-1]:
                print("Yes")
            else:
                print("No")

search()
output()
