# Napisz program, kt�ry wy�wietla du�e litery alfabetu od A do Z i od Z do A, z
# wykorzystaniem p�tli while.


i = ord("A")
while i < (ord("Z") + 1):
    print(chr(i))
    i += 1

print("\n")

i = ord("Z")
while i > (ord("A") - 1):
    print(chr(i))
    i -= 1




