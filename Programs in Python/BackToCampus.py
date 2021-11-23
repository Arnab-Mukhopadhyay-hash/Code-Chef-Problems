for _ in range(int(input())):
    n, k = map(int, input().split())
    # days = 0
    # if n == k or n < k:
    #     days = 1
    # else:
    #     if n - k <= k:
    #         days = 2
    #     else:
    #         days = 2
    #         days += (n // k)
    # print(days)


    # days = n//k
    # print(days)

    days = 0
    while n > 0:
        n = n - k
        days += 1
    print(days)