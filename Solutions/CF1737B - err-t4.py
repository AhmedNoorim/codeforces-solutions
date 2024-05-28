# Ela's Fitness and the Luxury Number

# [1, 2, 3, 4, 6, 8, 9, 12, 15, 16, 20, 24, 25, 30, 35, 36, 42, 48, 49, 56, 63, 64, 72, 80, 81, 90, 99, 100]
# here, 1, 4, 9, 16, 25 ... are square number with int root
# 1 with 2, 3
# 4 with 6, 8
# 9 with 12, 15
# 16 with 20, 24

import math


# counting lux numbers from 1 to 'num'
def luxury_count(num):

    if num == 0:
        return 0

    root = math.floor(math.sqrt(num))

    # each square number with int root is accompanied by 2 more number (after)
    count = 3 * (root - 1)

    if num >= root * root + 2 * root:
        count += 3
    elif num >= root * root + root:
        count += 2
    elif num >= root * root:
        count += 1

    return count


def luxury_days():
    start, end = [int(num) for num in input().split(" ")]

    count = luxury_count(end) - luxury_count(start - 1)

    print(count)


test_cases = int(input())

while test_cases:
    luxury_days()
    test_cases -= 1
