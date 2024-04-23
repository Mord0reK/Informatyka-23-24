# Pobieranie liczb rzeczywistych od użytkownika i sumowanie ich

suma = 0
liczba = float(input("Podaj liczbę (0 kończy): "))

# Pętla trwa dopóki użytkownik nie poda 0
while liczba != 0:
  suma += liczba
  liczba = float(input("Podaj liczbę (0 kończy): "))

# Wyświetlanie sumy
print(f"Suma podanych liczb: {suma}")

