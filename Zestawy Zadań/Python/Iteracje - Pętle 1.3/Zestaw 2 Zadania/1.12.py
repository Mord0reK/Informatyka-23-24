# Obliczanie silni liczby n

def silnia(n):
  """
  Oblicza silnię liczby n.

  Argumenty:
    n: Liczba całkowita dodatnia.

  Wyjątki:
    ValueError: Jeśli n jest liczbą ujemną.

  Zwraca:
    Silnię liczby n.
  """
  if n < 0:
    raise ValueError("Liczba n musi być nieujemna")
  if n == 0:
    return 1
  silnia = 1
  for i in range(1, n + 1):
    silnia *= i
  return silnia

# Pobieranie liczby n od użytkownika
n = int(input("Podaj liczbę n: "))

try:
  # Obliczanie silni
  wynik = silnia(n)
  
  # Wyświetlanie wyniku
  print(f"Silnia liczby {n} wynosi: {wynik}")
except ValueError as e:
  # Wyświetlanie komunikatu o błędzie
  print(e)

