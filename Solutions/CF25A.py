# IQ test

size = int(input())

array = [int(num) for num in input().split(" ")]

even_count = 0
odd_count = 0

for i in range(3):
    if array[i] % 2 == 0:
        even_count += 1
    else:
        odd_count += 1


# list(filter(lambda x: x[1] % 2 == 1, enumerate(array)))
# return [(a,b), (c,d), (..,..), ...]
if even_count > 1:
    index = list(filter(lambda x: x[1] % 2 == 1, enumerate(array)))[0][0]
else:
    index = list(filter(lambda x: x[1] % 2 == 0, enumerate(array)))[0][0]

print(index + 1)
