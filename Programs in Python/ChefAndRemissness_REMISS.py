for _ in range(int(input())):
	a, b = map(int, input().split())
	minn = 0
	maxx = 0
	minn = max(a, b)
	maxx = a + b
	print(minn, maxx)