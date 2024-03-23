# Pobranie liczby całkowitej od użytkownika
L = int(input("Podaj liczbę od 1 do 5: "))

# Sprawdzenie i wyświetlenie nazwy miesiąca
if L >= 1 and L <= 5:
  miesiac = ["Styczeń", "Luty", "Marzec", "Kwiecień", "Maj"][L - 1]
  print(miesiac)
else:
  # Pusta linia, jeśli liczba jest poza zakresem
  print()

