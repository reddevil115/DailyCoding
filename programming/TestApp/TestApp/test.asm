MOV $8% rsi	// %rsi에 8을 저장
MOV $4% rdi	// %rdi에 4를 저장
MOV $8 4(% rdi, % rsi, 8)		// M[72]에 8을 저장
ADD % rsi 4(% rdi, % rsi, 8)		// M[72]에 16이 저장
PRT 4(% rdi, % rsi, 8)	// 16이 출력
ADD $4 % rdi	// %rdi에 8이 저장
PRT % rdi	// 8이 출력 
PRT % rsi	// 8이 출력
