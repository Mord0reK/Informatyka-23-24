# Napisz program, kt�ry za pomoc� instrukcji for znajduje najwi�ksz� i najmniejsz� liczb� ze zbioru n liczb
# losowych z przedzia�u od 0 do 99 oraz oblicza ich �redni�(w zadaniu n = 5).
import random

liczby = []
n = 5

for i in range(0, n):
    liczby.append(random.randint(0, 100))
    i += 1

print(liczby)
print("Suma:",sum(liczby))
print("Max:", max(liczby))
print("Min:", min(liczby))
print("Średnia:", int(sum(liczby) / len(liczby)))

