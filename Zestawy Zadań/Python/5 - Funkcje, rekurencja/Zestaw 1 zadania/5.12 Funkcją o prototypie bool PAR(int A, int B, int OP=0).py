def silnia(N):
    result = 1
    for i in range(2, N + 1):
        result *= i
    return result

if __name__ == "__main__":
    x = int(input("Podaj liczbę całkowitą x: "))
    n = int(input("Podaj liczbę całkowitą n: "))
    suma = sum((x ** i) / silnia(i) for i in range(n + 1))
    print("Wynik:", suma)
