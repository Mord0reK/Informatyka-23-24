def mnozmodulo(a, b, n):
    m = 1
    w = 0
    while m:
        if b and m:
            w = (w + a) % n
        a = (a << 1) % n
        m = m << 1
    return w

m = 1
p = 2
w = 1
e = int(input())
n = int(input())

while m:
    if e and m:
        w = mnozmodulo(w, p, n)
    p = mnozmodulo(p, p, n)
    m <<= 1

print(w)
