# Pobranie tekstu od użytkownika
tekst = input("Podaj tekst: ")

# Zamiana cyfr na gwiazdki
for i in range(len(tekst)):
  if tekst[i].isdigit():
    tekst = tekst[:i] + "*" + tekst[i+1:]

# Wyświetlenie zmodyfikowanego tekstu
print(tekst)

