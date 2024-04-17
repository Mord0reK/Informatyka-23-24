def mnozmodulo(a, b, n):
    m = 1
    w = 0
    while m:
        if b and m:
            w = (w + a) % n
        a = (a << 1) % n
        m = m << 1
    return w

def potegujmodulo(e, n):
    m = 1
    p = 2
    w = m
    while m:
        if e and m:
            w = mnozmodulo(w, p, n)
        p = mnozmodulo(p, p, n)
        m = m << 1
    return w

p = int(input())
if potegujmodulo(p, p) == 2:
    print("tak")
else:
    print("nie")
