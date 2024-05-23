def S3(n):
    if n == 1:
        return 1
    else:
        return 1 / (n * (n + 2)) + S3(n - 1)

if __name__ == "__main__":
    N = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", S3(N))
