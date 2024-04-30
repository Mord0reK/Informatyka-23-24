def czytaj_dane():
    global a, b, pole
    a = float(input())
    b = float(input())


def przetworz_dane():
    global a, b, pole
    pole = round(float(a * b), 2)
    return pole


def wyswietl_wynik():
    global pole
    print(pole)


czytaj_dane()
przetworz_dane()
wyswietl_wynik()