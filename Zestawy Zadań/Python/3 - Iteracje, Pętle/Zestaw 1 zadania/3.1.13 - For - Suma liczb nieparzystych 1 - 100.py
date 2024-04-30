# Napisz program, kt�ry za pomoc� instrukcji for sumuje liczby nieparzyste w przedziale od 1 do 100.

sum = 0
for i in range(0, 101):
    if i % 2 != 0:
        sum += i
        i += 1

print(sum)
