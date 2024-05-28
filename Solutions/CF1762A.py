# Divide and Conquer


def good_array():
    size = int(input())
    array = [int(num) for num in input().split(" ")]

    even = []
    odd = []

    for i in range(size):
        if array[i] % 2 == 0:
            even.append(array[i])
        else:
            odd.append(array[i])

    if len(odd) % 2 == 0:
        print(0)
    else:
        steps = []

        for i in odd:
            step = 0
            while i % 2 != 0:
                i = i // 2
                step += 1

            # appending steps for changing an odd to even
            steps.append(step)

        for i in even:
            step = 0
            while i % 2 == 0:
                i = i // 2
                step += 1

            # appending steps for changing an even to odd
            steps.append(step)

        steps.sort()

        print(steps[0])


test_cases = int(input())

while test_cases:
    good_array()
    test_cases -= 1
