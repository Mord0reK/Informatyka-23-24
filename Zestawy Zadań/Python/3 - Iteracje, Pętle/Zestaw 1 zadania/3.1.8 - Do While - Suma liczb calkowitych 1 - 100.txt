# Napisz program, kt�ry za pomoc� instrukcji do ... while sumuje liczby ca�kowite od 1 do 100.

sum = 0
i = 1
while True:
    sum = sum + i
    i += 1
    if i == 101:
        break
print(sum)
