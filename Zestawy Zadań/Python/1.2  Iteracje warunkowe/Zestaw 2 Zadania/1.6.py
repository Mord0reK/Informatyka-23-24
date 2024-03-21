# Pętla sprawdzająca wpisane znaki
while True:
  # Pobieranie znaków od użytkownika
  a, b, c = input("Wprowadź trzy znaki (A, B lub C): ").upper()

  # Sprawdzenie, czy wszystkie znaki to 'A'
  if a == 'A' and b == 'A' and c == 'A':
    print("zle")  # wrong
  else:
    # Sprawdzenie, czy przynajmniej jeden znak to 'B'
    if 'B' in (a, b, c):
      print("dobrze")  # good
      break  # Exit the loop after finding a 'B'
    else:
      print("Srednio")  # average
      break  # Exit the loop even without 'B'

# Uwaga: Kod wychodzi z pętli po znalezieniu 'B' lub po trzech próbach.

