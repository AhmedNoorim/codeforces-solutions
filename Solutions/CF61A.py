# Ultra-Fast Mathematician
# Link: https://codeforces.com/problemset/problem/61/A

first_number = input()
second_number = input()

for i in range(len(first_number)):
    if first_number[i] == second_number[i]:
        print(0, end="")
    else:
        print(1, end="")
