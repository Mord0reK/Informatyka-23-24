# Trzykrotne wyświetlanie liczb parzystych i niepodzielnych przez 10 z przedziału 50-150

# Pętla do-while
i = 50
do:
  if i % 2 == 0 and i % 10 != 0:
    print(i, end="\t")
  i += 1
while i <= 150

# Pętla while
i = 50
while i <= 150:
  if i % 2 == 0 and i % 10 != 0:
    print(i, end="\t")
  i += 1

# Pętla for
for i in range(50, 151):
  if i % 2 == 0 and i % 10 != 0:
    print(i, end="\t")

