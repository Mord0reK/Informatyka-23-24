# Napisz program, który:
# a. Odczytuje trzy liczby rzeczywiste
# b. Oblicza i wypisuje średnią arytmetyczną
# c. Jeśli średnia jest mniejsza niż 4, to program w kolejnym wierszu wypisuje komunikat „niska
# średnia ” , w przeciwnym wypadku program wypisuje „niezła średnia”.

a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
c = float(input("Podaj trzecią liczbę: "))


srednia = (a + b + c) / 3

if srednia < 4:
  print("Niska średnia")
else:
  print("Niezła średnia")

