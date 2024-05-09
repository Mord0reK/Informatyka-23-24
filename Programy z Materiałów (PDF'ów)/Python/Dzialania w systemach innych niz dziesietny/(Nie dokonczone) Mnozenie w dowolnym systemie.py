def Mpc(cfr, liczba, podstawa):
    wynik = ""
    przn = 0
    for i in range(len(liczba) - 1, -1, -1):
        iloczyn = cfr * (int(liczba[i]) - ord('0')) + przn
        przn = iloczyn // podstawa
        wynik = str(iloczyn % podstawa + ord('0')) + wynik
    if przn > 0:
        wynik = str(przn + ord('0')) + wynik
    return wynik

def Dodaj(a, b, podstawa):
    while len(a) < len(b): a = '0' + a
    while len(b) < len(a): b = '0' + b
    c = ""
    przn = 0
    for i in range(len(a) - 1, -1, -1):
        suma = przn + int(a[i]) + int(b[i])
        c = str(suma % podstawa) + c
        przn = suma // podstawa
    if przn == 1: c = '1' + c
    return c


c = ""
podstawa = int(input("Podaj podstawe: "))
a = input("Podaj pierwsza liczbe: ")
b = input("Podaj druga liczbe: ")
d = len(b) - 1
for i in range(d, -1, -1):
    pom = Mpc(int(b[i]), a, podstawa)
    for j in range(1, d - i): pom += '0'
    c = Dodaj(c, pom, podstawa)
print(c)
