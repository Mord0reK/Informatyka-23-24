def MIX(a):
    return max(0, a - 20)

if __name__ == "__main__":
    L = int(input("Podaj liczbę całkowitą: "))
    print("Wynik:", MIX(L))
