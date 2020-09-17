head=("******Log In******")
print(head)
id=("simple")
pw=("1234")
a = input("Type your ID: ")
if(a) in[id]:
	print("Cinfired your ID")
	b = input("Type your password: ")
	if(b) in[pw]:
		print("Log in Success! Welcome Back!")
	else:
		print("Password isn't match,Log In failed")
else:
	print("Can't find your ID, Log In failed.")