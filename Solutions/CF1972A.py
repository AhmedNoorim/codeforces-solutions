# Contest Proposal

test_cases = int(input())


def contest():
    size = int(input())

    listA = input().split(" ")
    listB = input().split(" ")

    A = [int(num) for num in listA]
    B = [int(num) for num in listB]

    contest = []
    index_A = 0
    index_B = 0
    turn = 0

    while True:
        if A[index_A] <= B[index_B]:
            contest.append(A[index_A])
            index_A += 1
        else:
            contest.append(B[index_B])
            turn += 1

        index_B += 1
        if len(contest) == size:
            break

    # print(contest)
    print(turn)


while test_cases:
    contest()
    test_cases -= 1
