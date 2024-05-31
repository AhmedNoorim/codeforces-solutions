# Increase/Decrease/Copy
# Link: https://codeforces.com/problemset/problem/1976/B

import sys


def number_of_operation():
    size = int(input())

    array_a = [int(num) for num in input().split(" ")]
    array_b = [int(num) for num in input().split(" ")]

    last_b = array_b[size]
    last_b_resolved = False
    lowest_dif = sys.maxsize
    nearest_digit = last_b

    steps = 0

    for i in range(size):
        dif = abs(array_a[i] - array_b[i])

        steps += dif

        if (
            array_a[i] >= last_b >= array_b[i] or array_a[i] <= last_b <= array_b[i]
        ) and not last_b_resolved:
            steps += 1
            lowest_dif = 0
            last_b_resolved = True

        else:
            if last_b > array_a[i] and last_b > array_b[i]:

                if array_a[i] < array_b[i]:
                    array_a[i] = array_b[i]

            elif last_b < array_a[i] and last_b < array_b[i]:

                if array_a[i] > array_b[i]:
                    array_a[i] = array_b[i]

            dif = abs(array_a[i] - last_b)
            if dif < lowest_dif:
                nearest_digit = array_a[i]
                lowest_dif = dif

    if not last_b_resolved:
        steps += abs(nearest_digit - last_b) + 1

    print(steps)


test_cases = int(input())

while test_cases:
    number_of_operation()
    test_cases -= 1
