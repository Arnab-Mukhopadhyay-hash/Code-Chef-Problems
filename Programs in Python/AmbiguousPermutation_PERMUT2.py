while True:
    n = int(input())
    if n == 0:
        break
    li = list(map(int, input().split()))

    # update
    # inserting a 0 at 0 index of li to make it a 1 based permutation
    li.insert(0, 0)

    # inverse_li = []
    inverse_li = [0] * (n + 1)  # this makes an array of size n + 1

    for i in range(n + 1):
        inverse_li[li[i]] = i

    # time complexity is O(n) so time limit exceeds
    # minn = 0
    # for i in range(n + 1):
    #     if minn in li:
    #         inverse_li.append(li.index(minn) + 1)
    #         minn += 1
    #     else:
    #         minn += 1
    # print(li, inverse_li)
    if li == inverse_li:
        print("ambiguous")
    else:
        print("not ambiguous")
