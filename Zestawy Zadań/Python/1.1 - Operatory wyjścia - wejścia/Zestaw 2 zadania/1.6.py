#Napisz program, który potrafi odszukać miejsce zerowe dowolnej prostej zadanej w postaci
#kierunkowej y= ax + b (przy założeniu, że a≠ 0). Program :
#a. Pobiera od użytkownika współczynniki a i b
#b. W kolejnym wierszu wypisuje znalezione miejsce zerowe
#c. W kolejnym wierszu wykonuje pauzę systemową

import time

a = float(input("Podaj a: "))
b = float(input("Podaj b: "))

if a != 0:
    zerowe = -b/a
    print("Współrzędne zerowego: (", zerowe, ",0)")
    time.sleep(1)
    input()