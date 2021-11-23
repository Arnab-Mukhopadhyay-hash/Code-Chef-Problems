"""
The logic is very simple we need to find the max of the input array
and then the difference between each element and the maximum
since we can increase any number of elements by 1 at a single step
we need to find the maximum difference, since it would be the maximum no. of steps required
"""

# for _ in range(int(input())):
#     n = int(input())
#     a = list(map(int, input().split()))
#     df = []
#     maxx = max(a)
#     for i in a:
#         d = maxx - i
#         df.append(d)
#     print(max(df))


"""
This is another approach
the maximum no. of steps would be the maximum difference
and the maximum difference would be the difference between the 
min a and the max a
"""


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    maxi = max(a)
    mini = min(a)
    print(maxi - mini)