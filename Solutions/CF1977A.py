# Little Nikita


def tower():
    moves, cubes = [int(num) for num in input().split(" ")]

    if moves < cubes:
        print("No")
    else:
        dif = cubes - moves
        if dif % 2 == 0:
            print("Yes")
        else:
            print("No")


test_cases = int(input())

while test_cases:
    tower()
    test_cases -= 1
