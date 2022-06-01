print("<숫자 맞추기 게임>")

print("")
k = input("숫자를 입력하세요!: ")
print("")
print("----------------------------------------------------")
print("입력하신 숫자까지 컴퓨터가 무작위로 숫자를 선택 할 예정입니다.")
print("")
print("컴퓨터가 선택한 숫자를 맞춰보세요!")
print("----------------------------------------------------")
print("")

l = int(k)

import random

n = random.randint(1,l)

while True:
	x = input("숫자를 맞춰보세요!: ")
	g = int(x)
	
	if (g) == (n):
		print("정답입니다!")
		print(n)
		break
		
	if (g < n):
		print("너무 작아요!")
		print("")
	
	if (g > n):
		print("너무 큽니다!")
		print("")