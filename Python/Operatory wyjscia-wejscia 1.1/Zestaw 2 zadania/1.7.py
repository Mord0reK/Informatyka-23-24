from itertools import permutations

def print_permutations(chars):
    perms = permutations(chars)
    for perm in perms:
        print(''.join(perm))

char1 = input("Podaj pierwszy znak: ")
char2 = input("Podaj drugi znak: ")
char3 = input("Podaj trzeci znak: ")

chars = [char1, char2, char3]

print("Wszystkie możliwe permutacje:")
print_permutations(chars)
