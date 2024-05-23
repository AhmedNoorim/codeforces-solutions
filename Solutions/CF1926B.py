# Vlad and Shapes

# For Square, the size of row with 1 remains equal for all the rows
# For Triangle, the size of row with 1 not equal for each of the rows


def Shape():
    grid = int(input())

    rows = []

    for i in range(grid):
        row = int(input())
        if row != 0:
            rows.append(str(row))

    if len(rows[0]) == len(rows[1]):
        print("SQUARE")
    else:
        print("TRIANGLE")


test_cases = int(input())

while test_cases:
    Shape()
    test_cases -= 1
