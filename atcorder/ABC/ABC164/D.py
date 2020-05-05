
s = str(input())
if len(s) < 4:
    print(0)
else:
    counter = 0
    runner_distance = len(s) - 4
    for i in range(len(s) - 4):
        for j in range(runner_distance):
            num = int(s[i:j])
            if num % 2019 == 0:
                counter += 1
        runner_distance -= 1
    print (counter)
