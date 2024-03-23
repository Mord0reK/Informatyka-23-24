# Napisz program, kt�ry za pomoc� instrukcji do ... while sumuje liczby nieparzyste w przedziale od 1 do 100.

sum = 0
i = 0
while True:
    i += 1
    if i % 2 != 0:
        sum += i
    if i >= 100:
        break

print(sum)
