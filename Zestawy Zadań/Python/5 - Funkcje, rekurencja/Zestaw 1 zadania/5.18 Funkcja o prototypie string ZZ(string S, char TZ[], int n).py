def S4(n):
    if n == 1:
        return 1
    else:
        return 1 / (n * (2 * n - 1)) + S4(n - 1)

if __name__ == "__main__":
    N = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", S4(N))
