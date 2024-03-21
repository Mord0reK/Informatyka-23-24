#Napisz program, który oblicza pole prostokąta. Wartości boków a i b wprowadzamy z klawiatury. W
#programie należy przyjąć, że zmienne a i b oraz pole są typu double (rzeczywistego). Przyjmujemy format
#wyświetlania ich na ekranie z dokładnością dwóch miejsc po kropce.

a = float(input("Podaj A: "))
b = float(input("Podaj B: "))
pole = a * b

pole = round(pole, 2)
print("Pole wynosi: ", pole) 
