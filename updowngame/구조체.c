#include <stdio.h>
#include<string.h>

struct student {
	char name[10];
	int age;
};
typedef struct student ST;

typedef struct {

	char name[10];
	int age;
}BOOK;



void main() {
	ST a={"haishuo", 23};
	ST b = { "hello", 23 };
	//a.name = "cho"; 문자열은 안됨
	strcpy(a.name, "cho");
	a.age = 30;
	if (a.age == b.age) {
		printf("같다");
	}
	else { printf("다르다"); }
	printf("%s %d \n", a.name, a.age);
	
	struct student arr[2] = {

		{"haishuo", 23}, 
		{ "hello", 23 }
	};

	printf("%s %d \n", arr[0].name, arr[1].age);

	BOOK c = { "book", 115 };
	
	BOOK* p = NULL;
	p = &c;
	printf("%s %d \n", p->name, p->age);
	
	return 0;
}