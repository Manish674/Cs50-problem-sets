height = int(input("Height: "))

while height < 0:
    height = int(input("Height: "))

col = 0 
row = 0

while row <= height:
    while col <= row:
        print("#"*col)
        col += 1
    row += 1