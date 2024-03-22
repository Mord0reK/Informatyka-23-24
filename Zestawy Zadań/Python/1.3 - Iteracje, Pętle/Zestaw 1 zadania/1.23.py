# Napisz program, kt�ry wy�wietla du�e litery alfabetu od A do Z i od Z do A, z
# wykorzystaniem p�tli do .. while.


i = ord("A")
while True:
    print(chr(i))
    i += 1
    if i == (ord("Z") + 1):
        break
print("\n")

i = ord("Z")
while True:
    print(chr(i))
    i -= 1
    if i == (ord("A") - 1):
        break



