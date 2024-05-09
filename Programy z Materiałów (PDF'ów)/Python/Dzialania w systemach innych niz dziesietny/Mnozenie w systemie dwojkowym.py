def Dodaj(a,b):
    przn = 0
    c = ""
    while len(a) < len(b):
        a = '0' + a
    while len(b) < len(a):
        b = '0' + b
    for i in range(len(a) - 1, -1, -1):
        suma = przn + int(a[i]) + int(b[i])
        if suma % 2 == 1:
            c = '1' + c
        else:
            c = '0' + c
        przn = suma // 2
    if przn == 1:
        c = '1' + c
    return c
        
c = "0"
a = str(input("Podaj liczbe a: "))
b = str(input("Podaj liczbe b: "))
for i in range(len(b)):
    if b[i] == '1':
        c = Dodaj(c,a)
    a = a + "0";
print(c)