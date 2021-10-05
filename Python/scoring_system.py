stop=("stop")

while True:

    Score = input("Type your score: ")
    Score = int(Score)

    def AVR(score):
	
	    if 94 < score < 101:
		    point = 4.5
		
	    elif 89 < score:
		    point = 4.0
	
	    elif 84 < score:
		    point = 3.5
		
	    elif 79 < score:
		    point = 3.0
	
	    elif 74 < score:
		    point = 2.5
		
	    elif 69 < score:
		    point = 2.0
	
	    elif 64 < score:
		    point = 1.5
	
	    elif 59 < score:
		    point = 1.0
		
	    elif 54 < score:
		    point = 0.5
		
	    else:
		    point = 0.0
	
	    return point
	
    def GRD(grade):
	
	    if grade == 4.5:
		    result = "A+"
	
	    elif grade == 4.0:
		    result = "A"
		
	    elif grade == 3.5:
		    result = "B+"
	
	    elif grade == 3.0:
		    result = "B"
	
	    elif grade == 2.5:
		    result = "C+"
	
	    elif grade == 2.0:
		    result = "C"
	
	    elif grade == 1.5:
		    result = "D+"
		
	    elif grade == 1.0:
		    result = "D"
	
	    else:
		    result = "F"
	
	    return result
		
	
    GPA = AVR(Score)
    Grade = GRD(GPA)


    print("Your score: "+ Grade +"," +str(GPA))

    out = input(" ")
 
    if (out == stop):
        break