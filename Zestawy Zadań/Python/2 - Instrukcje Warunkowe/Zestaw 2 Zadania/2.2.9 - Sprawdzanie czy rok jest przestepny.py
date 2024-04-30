# Pobierz rok od użytkownika
rok = int(input("Podaj rok: "))

# Sprawdź, czy rok jest przestępny
if (rok % 4 == 0 and rok % 100 != 0) or rok % 400 == 0:
  print("Tak, rok", rok, "jest rokiem przestępnym.")
else:
  print("Nie, rok", rok, "nie jest rokiem przestępnym.")
