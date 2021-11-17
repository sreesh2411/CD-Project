#include<stdio.h>

int main()
{
	
	int a[3] = { 1, 2 };
	a[2] = a[1] + a[2];
	a[2]++;

	printf("%d", a[2]);

 	return 0;
}
