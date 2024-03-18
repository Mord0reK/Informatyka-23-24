# Obliczanie liczby kwadratów potrzebnych do przekroczenia wartości L

L = float(input("Podaj liczbę L: "))
sum = 0
licznik = 0
i = 1

# Pętla do obliczania sumy kwadratów
while sum <= L:
  licznik += 1
  sum += i**2
  i += 1

# Wyświetlanie liczby kwadratów
print(f"Liczba kwadratów: {licznik}")

# Pobieranie znaku od użytkownika
x = input("Podaj znak: ")

# Pętla do ponawiania pobierania znaku, dopóki nie będzie 'R' lub 'r'
while x != "R" and x != "r":
  x = input("Podaj znak: ")
