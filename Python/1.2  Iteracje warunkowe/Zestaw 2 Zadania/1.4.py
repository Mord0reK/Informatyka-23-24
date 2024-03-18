import math

# Pobieranie współczynników a, b i c od użytkownika
a = float(input("Podaj współczynnik a: "))
b = float(input("Podaj współczynnik b: "))
c = float(input("Podaj współczynnik c: "))

# Obliczanie dyskryminanty
delta = b**2 - 4 * a * c

# Analiza dyskryminanty i rozwiązywanie równania
if delta > 0:
  # Dwa różne pierwiastki rzeczywiste
  x1 = (-b - math.sqrt(delta)) / (2 * a)
  x2 = (-b + math.sqrt(delta)) / (2 * a)
  print("Równanie ma dwa różne pierwiastki rzeczywiste:")
  print("x1 =", x1)
  print("x2 =", x2)
elif delta == 0:
  # Pierwiastek podwójny rzeczywisty
  x1 = -b / (2 * a)
  print("Równanie ma jeden pierwiastek podwójny rzeczywisty:")
  print("x1 =", x1)
else:
  # Brak pierwiastków rzeczywistych
  print("Równanie nie ma pierwiastków rzeczywistych.")


