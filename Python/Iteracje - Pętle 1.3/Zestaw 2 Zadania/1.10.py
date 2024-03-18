import random

# Losowanie miliona liczb całkowitych z przedziału 0-100
liczby = []
for _ in range(1000000):
  liczby.append(random.randint(0, 100))

# Liczenie liczb równych 100
licznik = len([liczba for liczba in liczby if liczba == 100])

# Wyświetlanie części liczb równych 100
print(f"Część liczb równych 100: {licznik / len(liczby)}")

