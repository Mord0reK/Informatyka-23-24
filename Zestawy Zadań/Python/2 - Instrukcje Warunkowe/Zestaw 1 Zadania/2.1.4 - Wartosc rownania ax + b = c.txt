# Pobieranie wartości a, b i c od użytkownika
a = float(input("Podaj wartość a: "))
b = float(input("Podaj wartość b: "))
c = float(input("Podaj wartość c: "))

# Obliczanie wartości x
if a != 0:  # Sprawdzenie, czy dzielnik nie jest równy zero
  x = (c - b) / a
  # Wyświetlenie wartości a, b, c i x z dokładnością do dwóch miejsc po przecinku
  print(f"Wartość a: {a:.2f}")
  print(f"Wartość b: {b:.2f}")
  print(f"Wartość c: {c:.2f}")
  print(f"Wartość x: {x:.2f}")
else:
  print("Nie można dzielić przez zero!")