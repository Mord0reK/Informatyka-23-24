x = int(input())

a = 0
r1 = 1
r2 = 2
i = 0

while a <= x:
    a = a + r1
    r1 = r1 + r2
    i = i + 1

i = i - 1

print(i)