# Verify Password
# Link: https://codeforces.com/problemset/problem/1976/A


def verification():
    size = int(input())
    password = input()

    prev_integer = -1
    prev_letter = "@"

    for i in range(size):
        if password[i].isdigit():
            current = int(password[i])

            if type(current) == int and prev_integer <= current:
                prev_integer = current
            else:
                print("No")
                return

        else:
            current = password[i]

            if prev_letter <= current:
                prev_letter = current

                if i != size - 1 and password[i + 1].isdigit():
                    print("No")
                    return
            else:
                print("No")
                return

    else:
        print("Yes")


test_cases = int(input())

while test_cases:
    verification()
    test_cases -= 1
