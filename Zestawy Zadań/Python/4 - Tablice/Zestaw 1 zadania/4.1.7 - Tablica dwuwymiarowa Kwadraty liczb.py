dane = [[0] * 10 for _ in range(10)]
sum1 = 0
sum2 = 0

for i in range(10):
    for j in range(10):
        if j == 0:
            dane[i][j] = i
            sum1 += dane[i][j]
        elif j == 1:
            dane[i][j] = i * i
            sum2 += dane[i][j]
        else:
            dane[i][j] = 0
        print(dane[i][j], end=" ")
    print()

print("Suma pierwszej kolumny:", sum1)
print("Suma drugiej kolumny:", sum2)
