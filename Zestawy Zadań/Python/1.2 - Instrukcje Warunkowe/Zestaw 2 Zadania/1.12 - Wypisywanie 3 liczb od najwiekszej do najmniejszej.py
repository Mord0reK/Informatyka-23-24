


a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
c = float(input("Podaj trzecią liczbę: "))

max = max(a, b, c)
min = min(a, b, c)
mid = (a + b + c) - max - min

print("Najwieksza: ", max)
print("Środkowa: ", mid)
print("Najmniejsza: ", min)

