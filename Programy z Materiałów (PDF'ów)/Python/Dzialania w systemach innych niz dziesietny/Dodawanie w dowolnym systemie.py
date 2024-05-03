a = input("Liczba 1: ")
b = input("Liczba 2: ")
podstawa = int(input("Podstawa: "))
while len(a) < len(b): a = '0' + a
while len(b) < len(a): b = '0' + b
c = ""
przn = 0
for i in range(len(a) - 1, -1, -1):
    suma = przn + int(a[i]) + int(b[i])
    c = str(suma % podstawa) + c
    przn = suma // podstawa
if przn == 1: c = '1' + c
print("Suma: ", c)
