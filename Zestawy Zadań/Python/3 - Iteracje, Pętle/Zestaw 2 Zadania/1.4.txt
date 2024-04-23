# Pobranie tekstu od użytkownika
tekst = input("Podaj tekst: ")

# Usunięcie spacji z tekstu
tekst_bez_spacji = ""
for znak in tekst:
  if znak != " ":
    tekst_bez_spacji += znak

# Wyświetlenie zmodyfikowanego tekstu
print(tekst_bez_spacji)

