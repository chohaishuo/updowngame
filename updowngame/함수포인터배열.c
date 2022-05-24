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
	int funcNumber;    // �Լ� ��ȣ
	int num1, num2;

	printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ���: ");
	scanf("%d %d %d", &funcNumber, &num1, &num2);

	// ====================================================
	// ���⿡ �Լ������� �迭�� �����ϰ� ȣ���ϴ� �ڵ带 �ۼ��ϼ���.
	int (*fp[4])(int, int) = { add, sub, mul, div };
	int res = 0;

	res = fp[funcNumber](num1, num2);

	printf("%d ", res);

	// ===================================================

	return 0;
}