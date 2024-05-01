a = int(input())
b = int(input())
p = int(input())

for i in range(a, b+1):
    ax = i
    bx = p
    while bx:
        t = bx
        bx = ax % bx
        ax = t
    if ax == 1:
        print(i)
    
