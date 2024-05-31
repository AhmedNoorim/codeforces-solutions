# Cut Ribbon
# link: https://codeforces.com/problemset/problem/189/A

length, a, b, c = [int(num) for num in input().split(" ")]


steps = 0
rem = length

a_count = 0
while a_count * a <= length:

    b_count = 0
    while a_count * a + b_count * b <= length:

        rem = length - a_count * a - b_count * b
        if rem % c == 0:
            c_count = rem // c

            total = a_count + b_count + c_count
            steps = max(total, steps)

        b_count += 1
    a_count += 1

print(steps)
