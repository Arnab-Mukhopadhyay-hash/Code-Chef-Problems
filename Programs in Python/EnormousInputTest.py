n, k = map(int, input().split())
div = 0
for t in range(n):
    num = int(input())
    if num%k == 0:
        div += 1
print(div)