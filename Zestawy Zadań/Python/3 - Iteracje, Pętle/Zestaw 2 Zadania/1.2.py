# Pobranie dwóch liczb od użytkownika
a = int(input("Podaj pierwszą liczbę: "))
b = int(input("Podaj drugą liczbę: "))

# Pętla while, która sprawdza, czy liczby są równe i pobiera je ponownie, jeśli tak
while a == b:
  print("Liczby są równe. Podaj je ponownie.")
  a = int(input("Podaj pierwszą liczbę: "))
  b = int(input("Podaj drugą liczbę: "))

# Suma pobranych liczb
suma = a + b

# Wyświetlenie sumy
print("Suma:", suma)

