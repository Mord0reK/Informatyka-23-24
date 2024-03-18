# Pętla czekająca na wpisanie 'Q'
while True:
  # Pobieranie znaku od użytkownika
  znak = input("Wprowadź znak (aby zakończyć, wpisz 'Q'): ")

  # Sprawdzenie znaku
  if znak == 'Q':
    # Jeśli znak to 'Q', zakończ pętlę
    break
  else:
    # Jeśli znak to nie 'Q', kontynuuj pętlę

print("Wpisałeś 'Q'. Pętla zakończona.")

