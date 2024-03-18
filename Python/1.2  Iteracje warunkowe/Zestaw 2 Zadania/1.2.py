# Get three numbers from the user
a = float(input("Podaj pierwszą liczbę: "))
b = float(input("Podaj drugą liczbę: "))
c = float(input("Podaj trzecią liczbę: "))

# Calculate the average
average = (a + b + c) / 3

# Determine average category (low or not low)
if average < 4:
  print("Niska średnia (Low average)")
else:
  print("Niezła średnia (Not low average)")

