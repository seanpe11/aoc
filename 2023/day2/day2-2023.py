# part 1
print("part 1:")
sum = 0
limits = {
    "red": 12,
    "green": 13,
    "blue": 14,
    "red\n": 12,
    "green\n": 13,
    "blue\n": 14,
}
for line in open("input.txt"):
    input = line.split(":")

    game = input[0]
    gameId = input[0].split(" ")[1]
    events = input[1]

    flag = True
    print(game)
    for event in events.split(";"):
        for color in event.split(","):
            num = color.split(" ")[1]
            col = color.split(" ")[2]
            # print(num)
            # print(col)
            if (int(num) > limits[col]):
                flag = False
    if (flag):
        sum+=int(gameId)

print(sum)

# part 2
print("part 2:")
sum = 0

for line in open("input.txt"):
    input = line.split(":")
    minimums = {
        "red": 0,
        "green": 0,
        "blue": 0,
    }

    game = input[0]
    events = input[1]

    flag = True
    print(game)
    for event in events.split(";"):
        for color in event.split(","):
            num = color.split(" ")[1]
            col = color.split(" ")[2].rstrip("\n")
            if (int(num) > minimums[col]):
                minimums[col] = int(num)
    powersum = 1
    for value in minimums.values():
        powersum *= value

    sum+=powersum

print(sum)
