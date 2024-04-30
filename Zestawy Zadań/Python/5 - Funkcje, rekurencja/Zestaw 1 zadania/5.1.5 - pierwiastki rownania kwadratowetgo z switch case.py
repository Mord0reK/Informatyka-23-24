import math


def czytaj_dane():
    global a, b, c
    a = float(input("Podaj współczynnik a: "))
    b = float(input("Podaj współczynnik b: "))
    c = float(input("Podaj współczynnik c: "))


def przetworz_dane():
    global a,b,c, delta, brak, x1, x2
    delta = b**2 - 4 * a * c
    if delta > 0:
        x1 = -b - math.sqrt(delta) / 2 * a
        x2 = -b + math.sqrt(delta) / 2 * a
        return x1, x2
    elif delta == 0:
        x1 = -b / 2 * a
        return x1
    else:
        brak = True
        return brak


def wyswietl_wynik():
    global a , b, c, delta, x1, x2, brak
    if 'x1' in globals() and 'x2' in globals():
        print("Pierwszy pierwiastek: ", round(x1, 2))
        print("Drugi pierwiastek: ", round(x2, 2))
    elif 'brak' in globals():
        print("Te równanie kwadratowe nie posiada pierwiastków.")
    else:
        print("Pierwiastek równania: ", round(x1, 2))


czytaj_dane()
przetworz_dane()
wyswietl_wynik()

