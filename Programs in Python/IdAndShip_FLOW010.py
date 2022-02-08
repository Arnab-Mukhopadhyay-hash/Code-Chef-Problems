tbl = {"b": "BattleShip", "c": "Cruiser", "d": "Destroyer", "f": "Frigate"}
for _ in range(int(input())):
	ch = input()
	print(tbl[ch.lower()])