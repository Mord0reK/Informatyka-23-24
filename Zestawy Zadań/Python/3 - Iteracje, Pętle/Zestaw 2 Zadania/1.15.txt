import math

# Definicja stałej PI
PI = 3.14159265358979323846

# Definicja kroku
step = 0.01

# Obliczenie liczby kroków
num_steps = int((2 * PI) / step)

# Nagłówek tabeli
print("x\t\tsin(x)\t\tcos(x)")

# Pętla po wartościach x
for i in range(num_steps + 1):
  # Obliczenie wartości x
  x = -PI + i * step

  # Obliczenie wartości sin(x) i cos(x)
  sin_x = math.sin(x)
  cos_x = math.cos(x)

  # Wyświetlenie wartości w tabeli
  print(f"{x:.5f}\t{sin_x:.5f}\t{cos_x:.5f}")

