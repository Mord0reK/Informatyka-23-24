def ZNAKI(a, b, X):
    return a if X > 0 else b

if __name__ == "__main__":
    U = input("Podaj pierwszy znak: ")
    V = input("Podaj drugi znak: ")
    while True:
        L = int(input("Podaj liczbę całkowitą: "))
        print("Wynik:", ZNAKI(U, V, L))
        if L == 0:
            break
