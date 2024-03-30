tab = [0] * 20

for i in range(0, 20):
    tab[i] = int(input("Podaj liczbe: "))

print("Ostatnie 10 liczb w tablicy: ")
for i in range(10, 20):
    print(tab[i], end=" ")
