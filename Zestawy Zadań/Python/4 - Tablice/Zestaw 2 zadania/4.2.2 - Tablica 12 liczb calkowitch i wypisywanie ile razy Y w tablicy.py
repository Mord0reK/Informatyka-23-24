tab = [0] * 12
Y = 0
licznik = 0

for i in range(0, 12):
    tab[i] = int(input("Podaj liczby: "))

Y = int(input("Podaj Y: "))

for i in range(0, 12):
    if tab[i] == Y:
        licznik += 1

print("Liczba", Y, "znajduje się", licznik, "raz(y) w liście.")