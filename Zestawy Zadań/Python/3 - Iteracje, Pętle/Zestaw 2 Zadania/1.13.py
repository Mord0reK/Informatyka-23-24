# Pobieranie n liczb całkowitych i obliczanie ich sumy i iloczynu

def pobierz_liczby(n):
  """
  Pobiera n liczb całkowitych od użytkownika.

  Argumenty:
    n: Liczba całkowita dodatnia.

  Zwraca:
    Listę n liczb całkowitych.
  """
  liczby = []
  for _ in range(n):
    liczba = int(input("Podaj liczbę: "))
    liczby.append(liczba)
  return liczby

def oblicz_sume_iloczyn(liczby):
  """
  Oblicza sumę i iloczyn podanych liczb.

  Argumenty:
    liczby: Lista liczb całkowitych.

  Zwraca:
    Krotkę (suma, iloczyn).
  """
  suma = 0
  iloczyn = 1
  for liczba in liczby:
    suma += liczba
    iloczyn *= liczba
  return suma, iloczyn

# Pobieranie liczby n
n = int(input("Podaj liczbę n: "))

# Pobieranie n liczb od użytkownika
liczby = pobierz_liczby(n)

# Obliczanie sumy i iloczynu
suma, iloczyn = oblicz_sume_iloczyn(liczby)

# Wyświetlanie wyników
print(f"Suma: {suma}")
print(f"Iloczyn: {iloczyn}")

