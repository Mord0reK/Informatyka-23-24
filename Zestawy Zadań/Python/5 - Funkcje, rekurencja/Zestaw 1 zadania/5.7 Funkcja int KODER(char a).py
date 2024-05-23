def KODER(a):
    return (ord(a) + 10) % 256

if __name__ == "__main__":
    for _ in range(10):
        znak = input("Podaj znak: ")
        print("Zmodyfikowany kod znaku:", KODER(znak))
