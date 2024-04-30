import random

tab = [[0] * 10 for _ in range(10)]

def czytaj_dane():
    for i in range(10):
        for j in range(10):
            if i == j:
                tab[i][j] = random.randint(0,9)
            else:
                tab[i][j] = 0


def przetworz_dane():
    global sum
    sum = 0
    for i in range(10):
        for j in range(10):
            if i == j:
                sum = sum + tab[i][j]
    return sum


def wyswietl_wynik():
    global sum
    for i in range(10):
        for j in range(10):
            print(tab[i][j], end=" ")
        print()

    print("Suma: ", sum)


czytaj_dane()
przetworz_dane()
wyswietl_wynik()