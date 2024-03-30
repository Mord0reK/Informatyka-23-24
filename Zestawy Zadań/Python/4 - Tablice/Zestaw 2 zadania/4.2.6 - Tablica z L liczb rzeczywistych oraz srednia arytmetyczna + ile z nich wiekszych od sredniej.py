przedzial = int(input("Podaj liczbe z przedzialu (0 < L < 50): "))

licznik = 0
tab = [0] * przedzial

while przedzial < 0 or przedzial > 50:
    przedzial = int(input("Podaj liczbe z przedzialu (0 < L < 50): "))

for i in range(0, przedzial):
    tab[i] = float(input("Podaj liczbe do tabeli: "))

srednia = sum(tab) / przedzial

for i in range(0, przedzial):
    if srednia < tab[i]:
        licznik += 1

print("Średnia arytmetyczna liczb z tablicy: ", srednia)
print("Ilość liczb większych od sredniej: ", licznik)
