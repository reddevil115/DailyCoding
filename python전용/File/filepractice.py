i = input("Type Any: ")

f = open("file.txt","w")
f.write(i)
f.close()

f = open("file.txt","r")
text = f.read()
f.close()

print(text)