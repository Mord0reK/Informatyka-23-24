def POT(a, n):
    result = 1
    for _ in range(n):
        result *= a
    return result

if __name__ == "__main__":
    R = float(input("Podaj liczbę rzeczywistą: "))
    for i in range(1, 21):
        print(POT(R, i), end=" ")
    print()
