dane = [[0] * 10 for _ in range(10)]
sum = 0
przekatna = 0

for i in range(10):
    for j in range(10):
        if i + j == 9:
            dane[i][j] = przekatna
            przekatna += 1
            sum += dane[i][j]
        else:
            dane[i][j] = 0
        print(dane[i][j], end=" ")
    print()

print("Suma:", sum)
