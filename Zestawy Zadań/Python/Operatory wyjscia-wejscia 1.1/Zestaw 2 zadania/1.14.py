#Napisz program, kt�ry:
#a.pobiera od u�ytkownika dwa wyrazy : imi� i nazwisko
#b.wypisuje inicja�y, czyli pierwsze znaki imienia i nazwiska(oddzielone spacj�)
#c.w kolejnym wierszu wypisuje, ile znak�w ma imi�
#d.w kolejnym wierszu wypisuje ostatni� liter� nazwiska.Za�o�enie : imi� i nazwisko nie s�
#tekstami pustymi.

imie = str(input())
nazwisko = str(input())

print(imie[0], nazwisko[0])
print(len(imie))
print(nazwisko[-1])