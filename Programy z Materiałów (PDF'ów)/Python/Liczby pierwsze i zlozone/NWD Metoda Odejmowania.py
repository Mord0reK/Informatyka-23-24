a = int(input())
b = int(input())

while a != b:  
    if a < b:
        b = b - a
    else:
        a = a - b
    
print(a)