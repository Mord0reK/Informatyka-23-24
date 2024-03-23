
while True:
    znak = str(input("Podaj znak: ")).upper()
    if znak in ('A', 'B', 'C'):
        break
    else:
        print("Spróbuj ponownie")