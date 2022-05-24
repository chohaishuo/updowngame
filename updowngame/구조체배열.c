#include <stdio.h>
#include <string.h>

//  채워넣을 부분
struct person {
	char name;
	int age;
};
addToInfo() {
	struct preson[]
   }

//-------------------------------------------------
// 아래로는 어떠한 변경도 하지 마세요.
int main(void) {
 
	// 최대 길이 9인 이름과 나이를 n개 (최대 n=10) 입력받아 
	// 구조체에 넣은 후, 구조체 배열에 저장하는 함수 addToInfo()를 호출한다.
	// 이름에 "end"가 입력되면, 
	// showInfo_ascening_order() 함수를 호출하여, 구조체 배열의 값들을 알파벳의 오름차순으로 출력한다.
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

	// 구조체 배열에 저장된 값들을 알파벳의 오름차순으로 출력하는 함수
	// 출력형식은 "name ---> age"
	showInfo_ascending_order();

	return 0;

}