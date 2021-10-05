#Head#
Head = ("<Quiz Show>")
print(Head)
print("****************************************************")
print("if you want to solve the quiz type 'start'")
print("****************************************************")
#Body#
start=("start")
aaa = input(" ")
if(aaa) in[start]:
	print("Let's begin the quiz!")
	input("")
 #Quiz1#
	print("Quiz 1")
	print("In baseball who throw the ball to the catcher?")
	a= input(": ")
	pitcher=("pitcher")
	if(a) in[pitcher]:
		print("correct!!")
	else:
		print("Pitcher throw ball to the catcher.")
	input("")
 #Quiz2#
	print("Quiz 2")
	print("Who won the 2018 Russia World Cup games?")
	b= input(": ")
	France=("France")
	france=("france")
	if(b) in[France,france]:
		print("correct!!")
	else:
		print("France won the 2018 Russia World Cup games")
#Tail#
else:
	print("Good Bye!!")