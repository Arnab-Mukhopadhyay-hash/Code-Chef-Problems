l = int(input())
b = int(input())
area = l * b
pmt = 2 * (l + b)
if area > pmt:
    print("Area")
    print(area)
elif area == pmt:
    print("Eq")
    print(area)
else:
    print("Peri")
    print(pmt)
