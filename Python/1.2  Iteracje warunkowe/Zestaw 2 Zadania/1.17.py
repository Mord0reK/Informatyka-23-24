L = int(input("Podaj liczbę L: "))

for x in range(-100, 101):
  if abs(x) < L**2 and x % 4 == 0:
    print(x)

