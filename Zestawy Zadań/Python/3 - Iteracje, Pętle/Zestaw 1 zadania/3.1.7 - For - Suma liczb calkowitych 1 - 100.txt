# Napisz program, kt�ry za pomoc� instrukcji for sumuje liczby ca�kowite od 1 do 100.

sum = 0
for i in range(1, 101):
    sum = sum + i
    i += 1
print(sum)