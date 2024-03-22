# Zliczanie cyfr 5 w liczbie N

N = int(input("Podaj liczbę N: "))
licznik = 0

# Pętla do iterowania po cyfrach liczby N
while N > 0:
  # Sprawdzenie, czy ostatnia cyfra jest równa 5
  if N % 10 == 5:
    licznik += 1
  
  # Usunięcie ostatniej cyfry
  N //= 10

# Wyświetlenie liczby cyfr 5
print(f"Liczba cyfr 5: {licznik}")

