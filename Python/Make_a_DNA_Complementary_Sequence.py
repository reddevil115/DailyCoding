origin = "ACTGATCGATTACGTATAGTATTTGCTATCATACATATATATCGATGCGTTCAT"

changes = origin
changes = list(changes)

i = 0

while(i < len(origin)):
    
    if("T" ==  changes[i]):
        changes[i] = "A"

    elif("A" == changes[i]):
        changes[i] = "T"

    if("C" == changes[i]):
        changes[i] = "G"

    elif("G" == changes[i]):
        changes[i] = "C"
    
    i = i + 1

changes = "".join(changes)

print("Origin Sequence: ")
print(origin)
print(" ")
print("Complementary Sequence: ")
print(changes)



