n = int(input("Podaj gorna granice szukania liczb pierwszych: "))

S = [True] * (n+1)

p = 2

while p * p <= n:
    q = p
    while q * p <= n:
        x = p * q
        while x <= n:
            S[x] = False
            x = x * p
        q += 1
        while not S[p]:
            p += 1
    else:
        p += 1

for i in range(2, n):
    if S[i]:
        print(i, end=" ")
