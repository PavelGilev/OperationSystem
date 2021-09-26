#include <stdio.h>

void scan(int*a, int*b){
	printf("ENTER a and b\n");
	scanf("%d",a);
	scanf("%d",b);
}

int norm(int a,int b){
	return (a>b)?a-b:b-a;
}

