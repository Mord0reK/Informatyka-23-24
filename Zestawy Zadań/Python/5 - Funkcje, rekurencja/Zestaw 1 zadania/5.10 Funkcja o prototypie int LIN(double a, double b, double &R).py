def FAK(N):
    if N == 0 or N == 1:
        return 1
    else:
        return N * FAK(N - 1)

if __name__ == "__main__":
    for i in range(1, 21):
        print(f"{i}! = {FAK(i)}")
