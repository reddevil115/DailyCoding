MOV $8% rsi	// %rsi�� 8�� ����
MOV $4% rdi	// %rdi�� 4�� ����
MOV $8 4(% rdi, % rsi, 8)		// M[72]�� 8�� ����
ADD % rsi 4(% rdi, % rsi, 8)		// M[72]�� 16�� ����
PRT 4(% rdi, % rsi, 8)	// 16�� ���
ADD $4 % rdi	// %rdi�� 8�� ����
PRT % rdi	// 8�� ��� 
PRT % rsi	// 8�� ���
