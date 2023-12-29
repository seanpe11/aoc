sum = 0

for line in open("input.txt", "r"):
    left = 0
    right = len(line) - 1
    while (line[left].isalpha()):
        left+=1
    while (not line[right].isdigit()):
        right-=1

    print(f"{line[left]} {line[right]}")

    sum+= int(line[left] + line[right])

print(sum)
