k = int(input())
a, b = map(int, input().split())

if a // k == b // k:
    print("OK")
else:
    print("NG")



import numpy as np
import math

x = int32(input())

x_ln = math.floor((np.log(x/100)) / np.log(1.01) + 1)
print(x_ln)



n = int(input())
a, b = map(int, input().split())

a_round = round(a / n)
b_round = round(b / n)
if k == 1 or a % n == 0 or b % n == 0:
  print("OK")
else:
  if a_round < b_round:
    print("OK")
  else:
    print("NG")
