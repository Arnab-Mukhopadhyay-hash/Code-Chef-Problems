for _ in range(int(input())):
    n, k = map(int, input().split())

    days = 0
    while n > 0:
        n = n - k
        days += 1
    print(days)
