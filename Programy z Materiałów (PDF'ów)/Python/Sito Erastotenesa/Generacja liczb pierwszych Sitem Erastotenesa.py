import math

n = int(input("Podaj n: "))
S = [True] * (n+1)
g = int(math.sqrt(n))

for i in range(2, g):
    if S[i]:
        w = i * i
        while w <= n:
            S[w] = False
            w = w + i

for i in range(2, n):
    if S[i]:
        print(i, end=" ")