# Pobieranie tekstu od użytkownika i wyświetlanie go od końca

tekst = input("Podaj tekst: ")

for i in range(len(tekst)-1, -1, -1):
  print(tekst[i], end="")

print()

