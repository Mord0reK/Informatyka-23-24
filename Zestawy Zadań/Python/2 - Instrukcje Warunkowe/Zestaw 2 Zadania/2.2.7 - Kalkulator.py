# Napisz prosty kalkulator. Program umożliwia podanie kolejno dwu liczb rzeczywistych oraz
# znaku, który oznacza wykonywaną później operację. Ustala się następujące znaki:
# „+” – dodawanie
# „-„ – odejmowanie
# „*” – mnożenie
# „/” – dzielenie .
# Jeśli podany został odpowiedni znak, to program wypisuje wynik działania.
# Jeśli miałoby nastąpić dzielenie przez zero lub podano zły znak, to program wypisuje komunikat
# „ER”.

a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
operator = input("Podaj operator (+, -, *, /): ")

if operator == "+":
  wynik = a + b
  print(a, "+", b, "=", wynik)
elif operator == "-":
  wynik = a - b
  print(a, "-", b, "=", wynik)
elif operator == "*":
  wynik = a * b
  print(a, "*", b, "=", wynik)
elif operator == "/":
  if b != 0:
    wynik = a / b
    print(a, "/", b, "=", wynik)
  else:
    print("Dzielenie przez zero jest niedozwolone!")
else:
  print("Nieprawidłowy operator!")

