n = int(input())

lp = 0
p = 2

while lp < n:
    t = True
    for d in range(2, p):
        if p % d == 0:
            t = False
            break
    if t:
        print(p)
        lp = lp + 1
    p = p + 1