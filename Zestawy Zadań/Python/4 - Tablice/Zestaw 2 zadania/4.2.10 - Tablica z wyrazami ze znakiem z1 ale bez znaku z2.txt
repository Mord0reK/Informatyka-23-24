tab = [''] * 20

for i in range(0,20):
    tab[i] = str(input("Podaj wyraz: "))

z1 = str(input("Podaj znak z1: "))
z2 = str(input("Podaj znak z2: "))

for i in range(0,20):
    posiadaz1 = False
    posiadaz2 = False

    for j in range(0, len(tab[i])):
        if tab[i][j] == z1:
            posiadaz1 = True
        if tab[i][j] == z2:
            posiadaz2 = True

    if posiadaz1 and not posiadaz2:
        print(tab[i])
