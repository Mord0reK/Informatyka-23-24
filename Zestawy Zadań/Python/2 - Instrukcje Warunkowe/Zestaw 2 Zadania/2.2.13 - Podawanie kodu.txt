licznik = 0
kod = input("Podaj kod: ")

while licznik < 2:
  if kod == "qwerty":
    break
  licznik += 1
  kod = input("Podaj kod: ")

if licznik == 2:
  print("Przekroczono limit prób. Kod nie został zaakceptowany.")

