def MODROZ(a, b):
    return abs(a - b)

if __name__ == "__main__":
    X = int(input("Podaj pierwszą liczbę całkowitą: "))
    Y = int(input("Podaj drugą liczbę całkowitą: "))
    print("Wynik:", MODROZ(X, Y))
