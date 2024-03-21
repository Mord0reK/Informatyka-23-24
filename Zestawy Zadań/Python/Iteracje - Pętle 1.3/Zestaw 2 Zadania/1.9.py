import random

# Losowanie 100 000 liczb rzeczywistych z przedziału 0-100
liczby = []
for _ in range(100000):
  liczby.append(random.uniform(0, 100))

# Liczenie liczb mniejszych od 50
licznik = len([liczba for liczba in liczby if liczba < 50])

# Wyświetlanie części liczb mniejszych od 50
print(f"Część liczb mniejszych od 50: {licznik / len(liczby)}")

