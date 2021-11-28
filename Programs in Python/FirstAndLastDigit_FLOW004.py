for _ in range(int(input())):
    n = int(input())
    sum = n%10
    while(n >= 10):
        n = n//10
    sum += n
    print(sum)