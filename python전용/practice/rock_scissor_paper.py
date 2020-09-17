rock = ("rock")
scissor= ('scissor')
paper= ("paper")

user = input("Your Choice: ")

import random
meterial= ["rock","scissor","paper"]
x = random.choice(meterial)
print("Computer: " + x)

if(user) in[rock]:
	if(x) in[rock]:
		print("It'same!")
	if(x) in[paper]:
		print("You Lose!")
	if(x) in[scissor]:
		print("You Win!!")
		
if(user) in[paper]:
	if(x) in[paper]:
		print("It'same!")
	if(x) in[scissor]:
		print("You Lose!")
	if(x) in[rock]:
		print("You Win!!")
		
if(user) in[scissor]:
	if(x) in[scissor]:
		print("It'same!")
	if(x) in[rock]:
		print("You Lose!")
	if(x) in[paper]:
		print("You Win!!")

