L = int(input("Podaj liczbę L (0 < L < 40): "))

for i in range(1, L + 1):
  for j in range(i):
    print('*', end="")
  print()

