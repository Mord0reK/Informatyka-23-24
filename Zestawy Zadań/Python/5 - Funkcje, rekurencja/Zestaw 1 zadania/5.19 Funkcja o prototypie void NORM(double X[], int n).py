def S5(n):
    if n == 1:
        return 1
    else:
        return 1 / (n * (n + 1)) + S5(n - 1)

if __name__ == "__main__":
    N = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", S5(N))
