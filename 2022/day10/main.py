f = open("test.txt", "r")

cycleCount = 1

X = 1
strengths = [20, 60, 100, 140, 180, 220]
sum = 0
crt = ['', '', '', '', '', '', '']
for line in f:
    print(str(cycleCount // 40) + " " + line)
    if (line.split()[0] == 'addx'):
        cycleCount+=1
        position = (cycleCount - 1) % 40 
        if (position == X-1 or position == X+1 or position == X):
            crt[position // 40]+="#"
        else:
            crt[position // 40]+="."

        if (cycleCount in strengths):
            print(X*cycleCount)
            print()
            sum+=(X*cycleCount)
        X += int(line.split()[1])
        cycleCount+=1
        position = (cycleCount - 1) % 40
        if (position == X-1 or position == X+1 or position == X):
            crt[position // 40]+="#"
        else:
            crt[position // 40]+="."
        if (cycleCount in strengths):
            print('here')
            print(X*cycleCount)
            print()
            sum+=(X*cycleCount)
    else:
        cycleCount +=1
        position = (cycleCount - 1) % 40 
        if (position == X-1 or position == X+1 or position == X):
            crt[position // 40]+="#"
        else:
            crt[position // 40] += "."
        if (cycleCount in strengths):
            print(X*cycleCount)
            print()
            sum+=(X*cycleCount)

print(sum)
for s in crt:
    print(s)

