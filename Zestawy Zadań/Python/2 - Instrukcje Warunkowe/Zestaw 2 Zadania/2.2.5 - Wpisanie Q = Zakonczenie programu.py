# Napisz program, który:
# a. Pobiera od użytkownika znak
# b. Jeśli znak ten nie jest równy ‘Q’, to ponownie pobiera znak (następuje skok do punktu a).

while True:
  znak = str(input("Wprowadź znak (aby zakończyć, wpisz 'Q'): "))
  if znak == 'Q':
    break

print("Wpisałeś 'Q'. Pętla zakończona.")

