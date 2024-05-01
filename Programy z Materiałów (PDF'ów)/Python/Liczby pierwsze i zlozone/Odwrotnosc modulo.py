a = int(input())
b = int(input())

u, w, x, z = 1, a, 0, b

while w:
    if w < z:
        u, x = x, u
        w, z = z, w
    q = w // z
    u = u - q * x
    w = w - q * z

if z == 1:
    if x < 0:
        x = x + b
    print(x)
else:
    print("Brak")