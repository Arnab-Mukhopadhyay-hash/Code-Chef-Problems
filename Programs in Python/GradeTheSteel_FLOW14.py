for _ in range(int(input())):
    h, cc, ts = input().split()
    h = int(h)
    cc = float(cc)
    ts = int(ts)
    grade = 0
    if h > 50:
        if cc < 0.7:
            if ts > 5600:
                grade = 10
            else:
                grade = 9
        else:
            if ts > 5600:
                grade = 7
            else:
                grade = 6
    else:
        if cc < 0.7:
            if ts > 5600:
                grade = 8
            else:
                grade = 6
        else:
            if ts > 5600:
                grade = 6
            else:
                grade = 5
    print(grade)
