# Cut Ribbon

array = [int(num) for num in input().split(" ")]

length = array[0]
pieces = array[1:]

summation = 0
count = 0

for i in range(len(pieces)):
    if length % pieces[i] == 0 and i != len(pieces) - 1 and pieces[i] < pieces[i + 1]:
        count += length // pieces[i]
        break
    elif length % pieces[i] == 0 and i != len(pieces) - 1:
        continue
    else:
        count += length // pieces[i]
        length = length % pieces[i]


print(count)
