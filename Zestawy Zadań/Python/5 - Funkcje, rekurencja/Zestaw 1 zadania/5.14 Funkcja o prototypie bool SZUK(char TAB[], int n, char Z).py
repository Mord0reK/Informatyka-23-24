def P(n):
    if n <= 2:
        return 1
    else:
        return P(n - 1) + P(n - 2)

if __name__ == "__main__":
    for i in range(1, 21):
        print(P(i), end=" ")
    print()
