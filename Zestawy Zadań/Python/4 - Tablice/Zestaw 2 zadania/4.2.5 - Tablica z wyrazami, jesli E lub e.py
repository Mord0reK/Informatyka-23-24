tab = [' '] * 10
for i in range(10):
    tab[i] = str(input("Podaj wyraz: "))

for i in range(10):
    if 'E' in tab[i]:
        print(tab[i], '*')
    elif 'e' in tab[i]:
        print(tab[i])
