#https://atcoder.jp/contests/abc003/tasks/abc003_2
S=input()
T=input()
W=["a","t","c","o","d","e","r"]
l=len(S)

for i in range(l):
    if S[i] == T[i]:
        continue;
    elif S[i] == "@":
        if T[i] in W:
            S[i] = T[i]
            continue;
        else:
            print("You will lose")
    elif T[i] == "@":
        if S[i] in W:
            T[i] = S[i]
            continue;
        else:
            print("You will lose")
    else:
        break;

if S == T:
    print("You can win")
