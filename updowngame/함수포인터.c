#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sub1(int _a, int _b)
{
	return _a - _b;
}
int sub2(int _a, int _b)
{
	return _b - _a;
}


int main()
{
	int result = 0;
	int a, b, temp=0;

	scanf("%d %d", &a, &b);

	// =============================================
	// 이 부분에 코드를 작성 하세요.
	int (*pf)(int, int)=NULL;
	
	if (a > b){
		pf = sub1;
	}
	else { pf = sub2; }
	
    result = pf(a, b);
	// ==============================================

	printf("result: %d", result);

	return 0;
}