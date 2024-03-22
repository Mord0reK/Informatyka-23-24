# Pobranie dwóch liczb od użytkownika
a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))

# Suma liczb
suma = a + b

# Pętla while, która pobiera kolejne liczby i dodaje je do sumy, dopóki suma nie będzie większa od 100
while suma <= 100:
  liczba = float(input("Podaj kolejną liczbę: "))
  suma += liczba

# Wyświetlenie komunikatu o przekroczeniu 100
print("Suma przekroczyła 100. Wynik:", suma)
