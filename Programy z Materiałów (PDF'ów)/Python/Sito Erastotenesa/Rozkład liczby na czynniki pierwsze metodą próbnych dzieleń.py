import math

p = int(input("Podaj liczbe ktorej rozkladu szukasz: "))

g = int(math.sqrt(p))

for i in range(2, g):
    while p % i == 0:
        print(i, " ")
        p = p / i
    if p == 1:
        break
if p > 1:
    print(p)

