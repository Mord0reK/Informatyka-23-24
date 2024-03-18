# Pobieranie operandów i operatora od użytkownika
a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
operator = input("Podaj operator (+, -, *, /): ")

# Wykonywanie obliczeń based na operatorze
if operator == "+":
  wynik = a + b
  print(f"{a} + {b} = {wynik}")
elif operator == "-":
  wynik = a - b
  print(f"{a} - {b} = {wynik}")
elif operator == "*":
  wynik = a * b
  print(f"{a} * {b} = {wynik}")
elif operator == "/":
  if b != 0:
    wynik = a / b
    print(f"{a} / {b} = {wynik}")
  else:
    print("Dzielenie przez zero jest niedozwolone!")
else:
  print("Nieprawidłowy operator!")

