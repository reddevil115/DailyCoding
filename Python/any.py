i = []

while True:

    a = input("Type Any: ")
    print("You typed: " + a)
    print("\n")

    if(a == "stop"):
       break

    elif(a == "pop"):
        i.pop()
        print(i)
        print("\n")
    
    else:
        i.append(a)
        print(i)
        print("\n")

