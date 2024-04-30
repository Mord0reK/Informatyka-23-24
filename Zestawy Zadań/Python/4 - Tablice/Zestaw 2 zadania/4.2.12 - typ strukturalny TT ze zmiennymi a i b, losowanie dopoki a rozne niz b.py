import random

class tt:
    def __init__(self, a,b,R):
        self.a = a
        self.b = b
        self.R = float(R)

z = tt(0,0,0)

z.a = random.randint(1, 6)
z.b = random.randint(1, 6)
z.R = random.randint(1, 100) / 10.0

while z.a == z.b:
    z.a = random.randint(1,6)
    z.b = random.randint(1,6)
    z.R = random.randint(1,100) / 10.0

print("a = ", z.a)
print("b = ", z.b)
print("R = ", z.R)