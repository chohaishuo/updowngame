#include <stdio.h>
#include <string.h>

//  ä������ �κ�
struct person {
	char name;
	int age;
};
addToInfo() {
	struct preson[]
   }

//-------------------------------------------------
// �Ʒ��δ� ��� ���浵 ���� ������.
int main(void) {
 
	// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
	// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
	// �̸��� "end"�� �ԷµǸ�, 
	// showInfo_ascening_order() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ ���ĺ��� ������������ ����Ѵ�.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// ����ü �迭�� ����� ������ ���ĺ��� ������������ ����ϴ� �Լ�
	// ��������� "name ---> age"
	showInfo_ascending_order();

	return 0;

}