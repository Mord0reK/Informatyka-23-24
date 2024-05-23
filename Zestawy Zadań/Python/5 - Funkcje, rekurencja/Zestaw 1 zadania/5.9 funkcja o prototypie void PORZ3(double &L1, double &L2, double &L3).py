def PORZ3(L1, L2, L3):
    lista = [L1, L2, L3]
    lista.sort()
    return lista

if __name__ == "__main__":
    while True:
        L1 = float(input("Podaj pierwszą liczbę rzeczywistą: "))
        L2 = float(input("Podaj drugą liczbę rzeczywistą: "))
        L3 = float(input("Podaj trzecią liczbę rzeczywistą: "))
        L1, L2, L3 = PORZ3(L1, L2, L3)
        print(L1, L2, L3)
        if L1 == 0 and L2 == 0 and L3 == 0:
            break
