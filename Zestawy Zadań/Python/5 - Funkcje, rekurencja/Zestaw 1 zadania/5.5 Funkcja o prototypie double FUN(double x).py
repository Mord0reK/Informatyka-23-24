def FUN(x):
    return x**3 - 70*x**2 - 4000*x + 100000

if __name__ == "__main__":
    for i in range(-1000, 1001):
        if FUN(i) == 0:
            print(f"FUN({i}) = 0")
