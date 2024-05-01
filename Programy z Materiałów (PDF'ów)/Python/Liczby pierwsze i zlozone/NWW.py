a = int(input())
b = int(input())
ab = a * b

while b:
    t = b
    b = a % b
    a = t

print(ab // a)