# Wypisywanie wielokrotności s w przedziale (a, b)

a = float(input("Podaj a: "))
b = float(input("Podaj b: "))
s = float(input("Podaj s: "))

# Sprawdzenie poprawności danych
if a >= b or s <= 0:
  print("Błędne dane!")
  exit()

# Pętla do iterowania po liczbach w przedziale (a, b)
for i in range(int(a) + 1, int(b)):
  # Sprawdzenie, czy liczba jest wielokrotnością s
  if i % s == 0:
    print(i)

