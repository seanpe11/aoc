sum = 0

# part 1

print("Part 1:")
for line in open("input.txt", "r"):
    left = 0
    right = len(line) - 1
    while (line[left].isalpha()):
        left+=1
    while (not line[right].isdigit()):
        right-=1
    sum+= int(line[left] + line[right])
print(sum)


# part 2

print("\n\nPart 2:")
# zirk to pad it so i can use index
numbers = ["&", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
sum = 0
for line in open("input.txt", "r"):
    left = 0
    right = len(line) - 1
    start = ""
    end = ""

    while(start==""):
        if (line[left].isdigit()):
            start = line[left]
        else:
            for n in numbers:
                # print(line[left:len(n)+left])
                if line[left:len(n)+left] == n:
                    start = str(numbers.index(line[left:len(n)+left]))
                    break
        left += 1
    while(end==""):
        if (line[right].isdigit()):
            end = line[right]
        else:
            for n in numbers:
                # print(line[left:len(n)+left])
                if line[right-len(n):right] == n:
                    end = str(numbers.index(line[right-len(n):right]))
                    break
        right -= 1

    print(start+end)
    sum += int(start + end)


print(sum)
