# Vlad and the Best of Five


def word_frequency():
    string = input()

    count_A = 0
    count_B = 0

    for char in string:
        if char == "A":
            count_A += 1
        else:
            count_B += 1

    print("A") if count_A > count_B else print("B")


test_cases = int(input())

while test_cases:
    word_frequency()
    test_cases -= 1
