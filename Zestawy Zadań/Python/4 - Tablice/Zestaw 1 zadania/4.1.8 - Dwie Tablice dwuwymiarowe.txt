a = [[0] * 10 for _ in range(10)]
b = [[0] * 10 for _ in range(10)]

for i in range(10):
    for j in range(10):
        a[i][j] = j
        b[i][j] = i

print("Tablica A:")
for i in range(10):
    for j in range(10):
        print(a[i][j], end=" ")
    print()

print("Tablica B:")
for i in range(10):
    for j in range(10):
        print(b[i][j], end=" ")
    print()