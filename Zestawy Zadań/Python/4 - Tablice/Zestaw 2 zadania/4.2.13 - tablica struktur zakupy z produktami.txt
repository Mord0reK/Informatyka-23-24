class produkt:
    def __init__(self, nazwa, cena, lsztuk):
        self.nazwa = str(nazwa)
        self.cena = float(cena)
        self.lsztuk = int(lsztuk)

sumaproduktow = 0
tab = []

for i in range(10):
    print("Podaj nazwe produktu: ")
    nazwa = str(input())
    print("Podaj cenę produktu: ")
    cena = float(input())
    print("Podaj liczbe sztuk produktu: ")
    lsztuk = int(input())
    tab.append(produkt(nazwa, cena, lsztuk))
    sumaproduktow += cena * lsztuk

for produkt in tab:
    print("Nazwa: ", produkt.nazwa, "\t" , "Cena: ", produkt.cena , "\t", "Liczba sztuk: ", produkt.lsztuk)

print("Suma cen zakupów: ", sumaproduktow)