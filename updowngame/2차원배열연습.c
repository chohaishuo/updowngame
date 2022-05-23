#include <stdio.h>

void main() {
	int arr[4][5] = { 0 };
	int (*prr)[5]=arr;
	int i, j, k=1, sum=0;
	
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0;  j < 5;  j++)
		{
			arr[i][j] = arr[i][j]+ k;
			if (arr[i][j] % 2 == 0) {
				sum += arr[i][j];
			}
			k++;
		}
	
	}
	
	printf("%d %d %d %d %d %d \n", prr, prr+1, *(prr[1] + 1), prr[3][4], *prr[0], *prr[1]);
	
	return 0;
}