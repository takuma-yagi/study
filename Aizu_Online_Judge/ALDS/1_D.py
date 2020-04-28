n = int(input())
p_list = [int(input()) for i in range(n)]
maxval = -20000000000000
minval = p_list[0]
for i in range(n - 1):
  maxval = max(maxval, p_list[i + 1] - minval)
  minval = min(minval, p_list[i + 1])
print(maxval)
