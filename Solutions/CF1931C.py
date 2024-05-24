# Make Equal Again

# Number of anomalies excluding the similar beginning and ending elements in the array is also equal to the burl


def amount_of_burl():
    size = int(input())

    array = input().split(" ")

    if size == 1:
        print(0)
        return

    first = array[0]
    last = array[size - 1]

    similar_form_first = 0
    similar_form_last = 0

    for char in array:
        if char == first:
            similar_form_first += 1

            # when all items are same
            if similar_form_first >= size:
                print(0)
                return
        else:
            break

    for char in reversed(array):
        if char == last:
            similar_form_last += 1
        else:
            break

    if first == last:
        print(size - similar_form_first - similar_form_last)
    else:
        if similar_form_first > similar_form_last:
            print(size - similar_form_first)
        else:
            print(size - similar_form_last)


test_cases = int(input())

while test_cases:
    amount_of_burl()
    test_cases -= 1
