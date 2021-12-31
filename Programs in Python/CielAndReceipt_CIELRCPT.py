# menu contains all the prices of the items
menu = [2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1]


for _ in range(int(input())):
	noo = 0
	tb = int(input())
	for i in menu:
		# this will give the maximum power of two nearest to the number
		if i <= tb:
			# after getting the nearest power of 2 we need to subtract it from the total bill as many times as possible to give the minimum number of orders
			noo += tb//i
			# we need to update the total bill and find the remaining bill after we have ordered the same item for amximu times possible.
			tb = tb % i
			if tb == 0:
				break
			else:
				continue
		else:
			continue
	print(noo)