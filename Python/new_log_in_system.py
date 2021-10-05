head=("******Log In*******")
print(head)

id = ("simple")
pw = ("1234")
stop = ("stop")

while True:
	user = input("Type Your ID: ")
	
	if(user == id):
		user2 = input("Type your PW: ")
		
		if(user2 == pw):
			print("Log In Successful!!")
			break
		else:
			print("PW isn't match!!")
			
	if(user == stop):
		break
		
	else:
		print("Can't find your ID!")