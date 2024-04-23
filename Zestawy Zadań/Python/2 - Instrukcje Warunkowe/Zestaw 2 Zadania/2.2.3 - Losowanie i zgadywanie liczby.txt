# Napisz program, który:
# a. Losuje liczbę całkowitą z przedziału od 1 do 6
# b. Pobiera od użytkownika liczbę całkowitą
# c. Jeśli podana liczba jest równa wylosowanej, to program wypisuje „BRAWO”.

import random

# Generowanie losowej liczby z zakresu 0-6
losowana = random.randint(0, 6)

# Pobranie liczby od użytkownika
wpisana = int(input("Podaj liczbę: "))

# Sprawdzenie i wyświetlenie wyniku
if losowana == wpisana:
    print("Brawo! Odgadłeś liczbę!")
else:
    print("Niestety, nie udało Ci się odgadnąć liczby.")

