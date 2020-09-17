head=("coin system")
print(head.title())

x = ("400")
xx = int(x)

coin = print("Coin: " + x)

user = ("user")
charge=("charge")
insert=("insert")

system= input(": ")

if(system) in[charge]:
	print("Type amount that you want charge.")
	
	y = input(": ")
	
	xx = int(x)
	yy = int(y)
	
	print("Now you have the coin.")
	print(xx+yy)
	
	input(": ")
	insert 	= ("insert")
	system = ("system")
	if(system) in(insert):
		print("type the amount that you want insert.")
		
		z = input(": ")
		
		zz = int(z)
		
		if(zz<xx+yy):
			coin = (xx+yy-zz)
			print(coin)
		else:
			print("You have low coins!")

if(system) in(insert):
	print("type the amout that you want insert.")
	
	z = input(": ")
	
	zz = int(z)
	
	if(zz<xx):
		coin = (xx-zz)
		print(coin)
	
	else:
		print("You have low coins!")