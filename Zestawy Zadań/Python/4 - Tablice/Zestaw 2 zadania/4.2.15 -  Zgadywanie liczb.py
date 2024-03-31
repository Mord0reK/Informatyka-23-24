import random

U = 0
liczbaprob = 0
proby = [0] * 100

L = random.randint(1,1000)

while True:
    U = int(input("Podaj liczbe: "))
    if U < L:
        print("Za mała")
    elif U > L:
        print("Za duza")
    if U == L:
        print("Brawo!")
        print("Twoje proby: ")
        for i in range(0,liczbaprob):
            print(proby[i], end=" ")
        break
    elif liczbaprob == 10:
        print("Game Over Christopher")
        break
    else:
        proby[liczbaprob] = U
        liczbaprob += 1
