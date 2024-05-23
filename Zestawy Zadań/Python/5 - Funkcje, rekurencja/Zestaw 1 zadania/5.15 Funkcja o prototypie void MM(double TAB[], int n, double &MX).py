def S1(n):
    if n == 1:
        return 1
    else:
        return 1 / n + S1(n - 1)

if __name__ == "__main__":
    N = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", S1(N))
