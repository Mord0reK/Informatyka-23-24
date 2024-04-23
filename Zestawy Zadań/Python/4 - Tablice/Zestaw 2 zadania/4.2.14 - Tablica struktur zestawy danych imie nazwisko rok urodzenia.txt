class osoba:
    def __init__(self, imie, nazwisko, rokurodzenia):
        self.imie = str(imie)
        self.nazwisko = str(nazwisko)
        self.rokurodzenia = int(rokurodzenia)


tab = []

n = int(input("Podaj ilosc zestawow danych. Zakres (0 < n < 20): "))

while n < 0 or n > 20:
    n = int(input("Podaj ilosc zestawow danych. Zakres (0 < n < 20): "))

for i in range(1,n+1):
    imie = str(input("Podaj imie: "))
    nazwisko = str(input("Podaj nazwisko: "))
    rokurodzenia = int(input("Podaj rok urodzenia: "))
    tab.append(osoba(imie, nazwisko, rokurodzenia))

tab.reverse()

for oso in tab:
    print("Imie: ", oso.imie, "\t " , "Nazwisko: ", oso.nazwisko, "\t", "Rok urodzenia: ", oso.rokurodzenia)
