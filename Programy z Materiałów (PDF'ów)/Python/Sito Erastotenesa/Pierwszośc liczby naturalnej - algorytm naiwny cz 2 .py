import math

t = True
p = int(input())

if p > 2:
    if p % 2 == 0:
        t = False
    else:
        g = int(math.sqrt(p))
        for i in range(3, g + 1, 2):
            if p % i == 0:
                t = False
                break

if t:
    print("tak")
else:
    print("Nie")
