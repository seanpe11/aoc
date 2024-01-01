import sys

# think of this as a 2d matriy, wherein if a symbol exists find adjacent numbers
# let's do a simple search, find all tuples where distance = 1
# write a number as a list of 

num_map = []
symbols = []
symbol_list = ["!", "@", "#", "$", "%", "^", "&", "*", "(", ")"]

line_count = 0
for line in open(sys.argv[1], "r"):
    row_count = 0
    y = 0
    while(y < len(line)):
        if (line[y] in symbol_list):
            obj = {
                line[y]: (line_count, row_count)
            }
            symbols.append(obj)


        if (line[y].isdigit()):
            number = "" 
            while(line[y].isdigit()):
                number += line[y]
                y+=1



            num_map.append({ number: {"start": (row_count, line_count), "end": (y, line_count)}}) 

        y+=1

        row_count += 1


    line_count += 1

print(num_map)
# print(symbols)
