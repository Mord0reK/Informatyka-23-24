import random

N = 1000

TAB = [random.randint(0, 10) for _ in range(N)]

licznik = [0] * (10 + 1)

for num in TAB:
    licznik[num] += 1

for i in range(11):
    print("Wartość", i, "wystąpiła w tablicy", licznik[i], "razy.")
