# Moving Chips

# The number of empty spaces between 1st '1' and last '1' is equal to the number of steps


def Moving_Chips():
    size = int(input())
    input_str_list = input().split(" ")

    ribbon = [int(num) for num in input_str_list]

    while True:
        if ribbon[0] == 0:
            ribbon.pop(0)
            size -= 1
        if ribbon[size - 1] == 0:
            ribbon.pop()
            size -= 1
        if ribbon[0] == 1 and ribbon[size - 1] == 1:
            break

    steps = ribbon.count(0)

    print(steps)


test_cases = int(input())

while test_cases:
    Moving_Chips()
    test_cases -= 1
