n = int(input("Podaj n w zakresie (1 <= n <= 200): "))

while n < 1 or n > 200:
    n = int(input("Podaj n w zakresie (1 <= n <= 200): "))

tab = [0] * n

for i in range(0, n):
    tab[i] = int(input("Podaj liczbe do tablicy: "))

print(tab)
