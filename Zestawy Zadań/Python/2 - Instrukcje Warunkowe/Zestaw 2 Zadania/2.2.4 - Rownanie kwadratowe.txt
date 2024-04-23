# Napisz program., który rozwiązuje równanie ax2 + bx + c = 0, czyli:
# a. Pobiera od użytkownika liczby rzeczywiste a, b i c
# b. Wypisuje liczbę rozwiązań
# c. W kolejnym wierszach wypisuje wartość pierwiastków równania lub znak ‘*’ – gdy rozwiązań
# jest nieskończenie wiele, albo znak ‘N’ – gdy brak rozwiązań.

import math

a = float(input("Podaj współczynnik a: "))
b = float(input("Podaj współczynnik b: "))
c = float(input("Podaj współczynnik c: "))

delta = b**2 - 4 * a * c

if delta > 0:
  # Dwa różne pierwiastki rzeczywiste
  x1 = (-b - math.sqrt(delta)) / (2 * a)
  x2 = (-b + math.sqrt(delta)) / (2 * a)
  print("Równanie ma dwa różne pierwiastki rzeczywiste:")
  print("x1 =", x1)
  print("x2 =", x2)
elif delta == 0:
  x1 = -b / (2 * a)
  print("Równanie ma jeden pierwiastek podwójny rzeczywisty:")
  print("x1 =", x1)
else:
  print("Równanie nie ma pierwiastków rzeczywistych.")


