# Napisz program, który pobiera trzy liczby (długości odcinków) i sprawdza, czy można z nich
# zbudować trójkąt prostokątny – ostatecznie wypisuje „TAK” lub „NIE”.

a = float(input("Podaj dlugosci boku A: "))
b = float(input("Podaj dlugosci boku B: "))
c = float(input("Podaj dlugosci boku C: "))

if a**2 + b**2 == c**2:
    print("Trojkąt jest prostokątny")
else:
    print("Trojkat nie jest prostokątny")