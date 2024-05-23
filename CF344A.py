number_of_magnets = int(input())

if number_of_magnets == 0:
    print(0)

else:
    number_of_groups = 0

    prev_magnet = input()
    number_of_magnets -= 1
    number_of_groups += 1

    while number_of_magnets:
        new_magnet = input()
        if new_magnet != prev_magnet:
            prev_magnet = new_magnet
            number_of_groups += 1

        number_of_magnets -= 1

    print(number_of_groups)
