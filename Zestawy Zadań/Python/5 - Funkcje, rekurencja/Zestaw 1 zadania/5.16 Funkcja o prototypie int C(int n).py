def S2(n):
    if n == 1:
        return 1
    else:
        return 1 / (n * n) + S2(n - 1)

if __name__ == "__main__":
    N = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", S2(N))
