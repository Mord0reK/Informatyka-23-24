import math

# Pobieranie współczynników a, b i c od użytkownika
a = float(input("Podaj współczynnik a: "))
b = float(input("Podaj współczynnik b: "))
c = float(input("Podaj współczynnik c: "))

# Obliczanie dyskryminanty
delta = b**2 - 4 * a * c

# Sprawdzenie, czy współczynnik główny (a) jest dodatni
if a > 0:
  # Rozwiązywanie równania na podstawie dyskryminanty
  if delta > 0:
    # Dwa różne pierwiastki rzeczywiste
    x1 = (-b - math.sqrt(delta)) / (2 * a)
    x2 = (-b + math.sqrt(delta)) / (2 * a)
    print("Pierwiastki (rzeczywiste i różne):")
    print("x1 =", x1)
    print("x2 =", x2)
  elif delta == 0:
    # Pierwiastek podwójny rzeczywisty
    x1 = -b / (2 * a)
    print("Pierwiastek (podwójny):")
    print("x1 =", x1)
  else:
    # Pierwiastki zespolone
    print("Równanie nie ma pierwiastków rzeczywistych.")
else:
  print("Współczynnik główny (a) musi być dodatni.")

