# Sprawdzanie, czy boki a, b i c tworzą trójkąt prostokątny

a = int(input("Podaj długość boku a: "))
b = int(input("Podaj długość boku b: "))
c = int(input("Podaj długość boku c: "))

# Sprawdzenie, czy wszystkie boki są dodatnie
if a <= 0 or b <= 0 or c <= 0:
  print("Błędne dane! Długości boków muszą być dodatnie.")
  exit()

# Sprawdzenie warunku Pitagorasa
if a**2 + b**2 == c**2:
  print("Trójkąt jest prostokątny.")
else:
  print("Trójkąt nie jest prostokątny.")

