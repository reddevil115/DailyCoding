print("<평가 시스템>")
print("----------------------------------------------------")
print("평가 시스템에 오신 것을 환영합니다!")
print("----------------------------------------------------")

target = input("평가할 대상을 입력하세요.: ")
print(target + "에 대한 평가를 시작합니다.")

input("")
print("***평가 시 주의 사항***")
print("1.평가 옵션은 High Medium Low가 있습니다.")
print("2.평가 옵션에 따가 점수가 차등 계산 됩니다.")
print("3.마지막 평가 종료 후 최종 점수와 해당되는 등급이 보여집니다.")
print("4.새로운 대상에 대한 평가는 프로그램 종료 후 재시작 해주십시오.")

rate = (0)
total = []

option1 = ("high")
option2 = ("medium")
option3 = ("low")

high = ("30")
medium = ("15")
low = ("0")

input("")

a = input("평가 해주십시오.: ")

if(a) in[option1]:
	print("누적점수")
	aa = print(rate + 30)
	b = input("평가 해주십시오.: ")
	
if(b) in[option1]:
	print("누적점수")
	bb = print(aa)
	
if(a) in[option2]:
	print("누적점수")
	aa = print(rate + 15)	

if(a) in[option3]:
	print("누적점수")
	aa = print(rate + 0)