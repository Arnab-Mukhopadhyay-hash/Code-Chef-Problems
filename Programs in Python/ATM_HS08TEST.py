withdraw, accnt_bal = map(float, input().split())

if withdraw + 0.50 <= accnt_bal and withdraw%5 == 0:
    accnt_bal -= withdraw + 0.50
    print(round(accnt_bal, 2))
else:
    print(round(accnt_bal, 2))
