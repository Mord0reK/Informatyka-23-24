przedzial = int(input("Podaj liczbe z przedzialu (0 < L < 100): "))

licznik = 0
tab = [' '] * przedzial

while przedzial < 0 or przedzial > 100:
    przedzial = int(input("Podaj liczbe z przedzialu (0 < L < 100): "))

for i in range(0, przedzial):
    tab[i] = str(input("Podaj znak: "))

for i in range(0, przedzial):
    if tab[przedzial - 1] == tab[i]:
        licznik += 1

print("Znak", tab[przedzial - 1], "znalazł się w tablicy", licznik, "razy.")