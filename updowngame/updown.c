#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	int a = 0, b = 0, c = 0, d = 0, i;
	a = ((rand() % 9) + 1) * ((rand() % 9) + 1);
	scanf_s("%d", &b);
	for (i = 0; i < b; i++)
	{
		scanf_s("%d", &c);
		if (c < 1 || c>100) {
			printf("������ ��� �����̴� �ٽ� �� �� ��ȸ�� �ش� \n");
			i--;
			continue;
		}
		if (c == a) {
			printf("�̱� \n");
			d++;
			break;
		}
		else if (c < a) {
			printf("up \n");

		}
		else {
			printf("down \n");
		}
	}
	if (d == 0) {
		printf("���� ������ ���� %d \n", a);
	}
	return 0;
}