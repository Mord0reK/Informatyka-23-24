a = input("Liczba 1: ")
b = input("Liczba 2: ")

while len(a) < len(b): a = '0' + a
while len(b) < len(a): b = '0' + b

c = ""

przn = 0

for i in range(len(a) - 1, -1, -1):
    suma = przn + int(a[i]) + int(b[i])
    if suma % 2 == 1: c = '1' + c
    else: c = '0' + c
    przn = suma // 2

if przn == 1: c = '1' + c

print("Suma: ", c)
