# Pobieranie trzech liczb rzeczywistych od użytkownika
a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
c = float(input("Podaj trzecią liczbę: "))

# Sortowanie liczb (od największej do najmniejszej)
max_val = max(a, b, c)
min_val = min(a, b, c)
mid_val = (a + b + c) - max_val - min_val

# Wyświetlenie liczb
print(f"Największa: {max_val}")
print(f"Środkowa: {mid_val}")
print(f"Najmniejsza: {min_val}")

