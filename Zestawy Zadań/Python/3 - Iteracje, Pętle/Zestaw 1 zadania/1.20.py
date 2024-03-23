#Napisz program wy�wietlaj�cy tabliczk� mno�enia dla liczb od 1 do 100 z wykorzystaniem podw�jnej p�tli do ... while


i = 1

while True:
    j = 1
    while True:
        print(i * j, end="\t")
        j += 1
        if j > 10:
            break
    print()
    i += 1
    if i > 10:
        break


