#Napisz program wy�wietlaj�cy tabliczk� mno�enia dla liczb od 1 do 100 z wykorzystaniem podw�jnej p�tli for

i = 1
j = 1

for i in range(1, 101):
    for j in range(1, 101):
        print(i*j, end="\t ")
    print("\n")


