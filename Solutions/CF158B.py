# Taxi
import math

groups = int(input())
input_string = input().split(" ")
numbers = [int(num) for num in input_string]
numbers.sort()
# print(numbers)

one_count = numbers.count(1)
two_count = numbers.count(2)
three_count = numbers.count(3)
four_count = numbers.count(4)
# print(one_count, two_count, three_count, four_count)

taxi_count = 0

taxi_count += two_count // 2
two_count %= 2

if one_count > three_count:

    if three_count:
        one_count -= three_count
        taxi_count += three_count
        three_count = 0

    taxi_count += math.ceil((two_count * 2 + one_count) / 4)

    if two_count:
        two_count -= 1


elif one_count < three_count:

    if one_count:
        three_count -= one_count
        taxi_count += one_count
        one_count = 0

    taxi_count += three_count

else:
    taxi_count += three_count
    one_count = 0
    three_count = 0

taxi_count += two_count
taxi_count += four_count

print(taxi_count)
