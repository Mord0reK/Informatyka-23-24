import math

tab = [[0.0] * 100 for _ in range(2)]
a = 0
for i in range(1, 100):
    value = i / 100.0
    if a < 100:
        tab[0][a] = value
        a += 1

for a in range(100):
    if tab[0][a] != 0:
        tab[1][a] = math.sin(tab[0][a]) / tab[0][a]
    else:
        tab[1][a] = 1

for a in range(100):
    print("{:.2f} {:.2f}".format(tab[0][a], tab[1][a]))
