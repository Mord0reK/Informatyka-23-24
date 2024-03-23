# Napisz program, który:
# a. Pobiera od użytkownika trzy znaki
# b. Jeśli wszystkie trzy są równe ‘A’, to wypisuje „ŹLE” i ponownie pobiera znaki (skok do
# punktu a)
# c. Jeśli którykolwiek znak jest równy ‘B’, to wypisuje „DOBRZE” , w przeciwnym wypadku
# wypisuje „ŚREDNIO”.



while True:
  a, b, c = input("Wprowadź trzy znaki (A, B lub C; Bez spacji): ").upper()

  if a == 'A' and b == 'A' and c == 'A':
    print("zle")
  else:
    if 'B' in (a, b, c):
      print("dobrze")
      break
    else:
      print("Srednio")
      break


