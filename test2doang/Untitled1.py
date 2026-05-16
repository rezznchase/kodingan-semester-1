rows = int(input("enter number of rows: "))
for i in range(1, rows + 1):
    print(" " * (rows - 1), end="")
    for j in range(2 * i - 1):
        print("*", end="")
    print()