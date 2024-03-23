# Napisz program wy�wietlaj�cy tabliczk� mno�enia dla liczb od 1 do 100 z wykorzystaniem podw�jnej p�tli
#while.


i = 1

while i <= 100:
    j = 1
    while j <= 100:
        print(i*j, end="\t")
        j += 1
    print("\n")
    i += 1

