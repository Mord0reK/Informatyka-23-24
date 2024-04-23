class typ1:
    def __init__(self, liczba, znak):
        self.liczba = liczba
        self.znak = znak


z = typ1(0, "")
y = typ1(0, "")

z.liczba = int(input("Podaj liczbe calkowita do Z: "))
z.znak = str(input("Podaj znak do Z: "))
y.liczba = int(input("Podaj liczbe calkowita do Y: "))
y.znak = str(input("Podaj do Y: "))

if z.liczba == y.liczba and z.znak == y.znak:
    print("Zgoda")
