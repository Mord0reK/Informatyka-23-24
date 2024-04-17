import math

t = True
p = int(input())
g = int(math.sqrt(p))

for i in range(2, g + 1):
    if p % i == 0:
        t = False
        break

if t:
    print("tak")
else:
    print("nie")
