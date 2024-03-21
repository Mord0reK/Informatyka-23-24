import random

# Wygenerowanie losowej liczby z zakresu 0-8
losowana = random.randint(0, 8)

# Pobranie liczby wpisanej przez użytkownika
wpisana = int(input("Podaj liczbę: "))

# Wyświetlenie wylosowanej liczby
print(f"Wylosowana liczba: {losowana}")

# Sprawdzenie i wyświetlenie wyniku
if wpisana == losowana:
  print("Zgadłeś!")
else:
  print("Pudło!")

