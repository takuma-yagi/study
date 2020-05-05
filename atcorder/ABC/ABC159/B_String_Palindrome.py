s = input()

def kaibun_checker(S):
    l = len(S)
    center = l // 2
    front = S[:center]
    back = S[center + 1 : l]
    if front == back:
        l_2 = len(front)
        center_2 = l_2 // 2
        front_2 = S[:center_2]
        back_2 = S[center_2 + 1 : l_2]
        if front_2 == back_2:
            print("Yes")
    else:
        print("No")

kaibun_checker(s)
