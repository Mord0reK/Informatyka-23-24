tekst = str(input("Podaj tekst: "))
tekstmod = ""

for litera in tekst:
  if litera != " " and litera != ".":
    tekstmod += litera

for i in range(1,11):
  print(tekstmod)