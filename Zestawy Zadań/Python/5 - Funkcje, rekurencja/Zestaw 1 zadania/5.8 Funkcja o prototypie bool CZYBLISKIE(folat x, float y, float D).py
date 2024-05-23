def CZYBLISKIE(x, y, D):
    return abs(x - y) < D

if __name__ == "__main__":
    x = float(input("Podaj pierwszą liczbę rzeczywistą: "))
    y = float(input("Podaj drugą liczbę rzeczywistą: "))
    if CZYBLISKIE(x, y, 1):
        print("OK")
    else:
        print("PECH")
