tekst = input("Podaj tekst: ")

# Usuwanie spacji i kropek
tekst = "".join(c for c in tekst if c not in " .")

# Wypisywanie zmienionego tekstu 10 razy
for _ in range(10):
  print(tekst)

