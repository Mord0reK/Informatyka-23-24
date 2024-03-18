# Pobranie wyrazu od użytkownika
wyraz = input("Podaj wyraz: ")

# Pętla do-while, która sprawdza, czy wyraz jest równy "Jan" lub "Janek" i pobiera go ponownie, jeśli nie
while wyraz != "Jan" and wyraz != "Janek":
  print("Podany wyraz jest niepoprawny. Podaj ponownie: ")
  wyraz = input()

# Wyświetlenie komunikatu "Cześć" i wyrazu
print("Cześć", wyraz)

