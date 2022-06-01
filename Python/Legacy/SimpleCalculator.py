def options():
    print("* Calculate Options:")
    print("1. Plus")
    print("2. Minus")
    print("3. Multiple")
    print("4. Devide")
    
def plus(val_A, val_B):
    result = int(val_A) + int(val_B)
    return result


print("< Simple Calculator >\n")

getVal = 0
getVal = input("Type Val A:")
numA = int(getVal)

getVal = 0
getVal = input("Type Val B:")
numB = int(getVal)

print("")
options()

getVal = input("Type Option Number: ")
final = 0

if(getVal == 1):
    final = plus(numA, numB)
    #str(final)

print("Result: " + final)
