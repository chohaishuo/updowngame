#include <stdio.h>
#include <stdlib.h>


struct student {
	char name;
	int age;
};

void main() {
	
	
	int n;
	scanf_s("%d", &n);
	int* p = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		p[i] = i + 1;
		printf("%d \n", p[i]);
	}
	free(p);
	return 0;
}