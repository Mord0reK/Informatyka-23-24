def COS(x, epsilon):
    result = 1
    term = 1
    k = 0
    while abs(term) > epsilon:
        k += 1
        term *= -x * x / (2 * k * (2 * k - 1))
        result += term
    return result

if __name__ == "__main__":
    x = float(input("Podaj liczbę rzeczywistą x: "))
    epsilon = float(input("Podaj dokładność epsilon: "))
    print("Wartość cos(x):", COS(x, epsilon))
