#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int funcNumber;    // 함수 번호
	int num1, num2;

	printf("함수 번호와 계산할 값을 입력하세요: ");
	scanf("%d %d %d", &funcNumber, &num1, &num2);

	// ====================================================
	// 여기에 함수포인터 배열을 선언하고 호출하는 코드를 작성하세요.
	int (*fp[4])(int, int) = { add, sub, mul, div };
	int res = 0;

	res = fp[funcNumber](num1, num2);

	printf("%d ", res);

	// ===================================================

	return 0;
}