# Obliczanie sumy liczb podzielnych przez 5 lub 9 z przedziału 1000-5000

suma = 0

for i in range(1000, 5001):
  if i % 5 == 0 or i % 9 == 0:
    suma += i

print(f"Suma: {suma}")

