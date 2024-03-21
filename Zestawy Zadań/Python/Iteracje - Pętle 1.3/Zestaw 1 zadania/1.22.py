#Napisz program, kt�ry wy�wietla du�e litery alfabetu od A do Z i od Z do A, z
# wykorzystaniem p�tli for.

for i in range(ord("A"), ord("Z") + 1):
    print(chr(i))
print("\n")

for i in range(ord("Z"), ord("A") - 1, -1):
    print(chr(i))


