#Prologue#

print("<Rock Scissor Paper>")
print("----------------------------------------------------")
print("If you want play 'Log In' first!")
print("----------------------------------------------------")

head=("******Log In*******")
print(head)

#Log in informations#

id = ("simple")
pw = ("1234")
stop = ("stop")

#game informations#

import random
meterial= ["rock","scissor","paper"]
x = random.choice(meterial)

rock = ("rock")
paper = ("paper")
scissor = ("scissor")

#Body#
while True:
	user = input("Type Your ID: ")
	
	if(user == id):
		user2 = input("Type your PW: ")
		
		if(user2 == pw):
			print("Log In Successful!!")	
			input("press enter key!")
			input("")
			
			while True:
				
				game = input("What is your choice? ")
				
				system = print("Computer: " + x)
				
				if(game) in[stop]:
					print("Good Bye!")
					exit()
				
				if(game) in[rock]:
					if(x) in[rock]:
						print("It's same!")
					if(x) in[paper]:
						print("You Lose!!")
					if(x) in[scissor]:
						print("You WIN!!!")
						
				if(game) in[paper]:
					if(x) in[paper]:
						print("It's same!")
					if(x) in[scissor]:
						print("You Lose!!")
					if(x) in[rock]:
						print("You WIN!!!")
				
				if(game) in[scissor]:
					if(x) in[scissor]:
						print("It's same!")
					if(x) in[rock]:
						print("You Lose!!")
					if(x) in[paper]:
						print("You WIN!!!")
				
				input("")
				
#Epilogue#	
		else:
			print("PW isn't match!!")
			
	if(user == stop):
		break
		
	else:
		print("Can't find your ID!")