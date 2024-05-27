# Arrival of the General


soldiers = int(input())
heights = input().split(" ")
heights = [int(num) for num in heights]

highest = max(heights)
lowest = min(heights)

highest_index = -1
lowest_index = -1

got_highest = False

for i in range(soldiers):
    if heights[i] == highest and not got_highest:
        highest_index = i
        got_highest = True

    elif heights[i] == lowest:
        lowest_index = i

seconds = 0
seconds += highest_index

if highest_index < lowest_index:
    seconds += soldiers - lowest_index - 1
else:
    seconds += soldiers - lowest_index - 2

print(seconds)
