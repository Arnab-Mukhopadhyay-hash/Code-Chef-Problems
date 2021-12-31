import math


def LeastCommonMutiple(n1, n2, gcd):
    return (n1 * n2) // gcd
# here we have used the fact num1 * num2 = lcm * gcd so the complexity becomes O(1)


for T in range(int(input())):
    a, b = map(int, input().split())
    gcd = math.gcd(a, b)
    lcm = LeastCommonMutiple(a, b, gcd)
    print(gcd, lcm)
