#Napisz program, który:
#a.pobiera od użytkownika liczbę rzeczywistą R(zakładamy, że jest dodatnia)
#b.w kolejnych wierszach wyświetla wartość pierwsiastka z r, lnR, R do -7 oraz R pomnożone przez π

import math

r = float(input())

print(math.sqrt(r), end=" ")
print(math.log(r), end=" ")
print(math.pow(r, -7), end=" ")