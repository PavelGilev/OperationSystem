#include "file3.c"
#include "file1.c"
#include "file2.c"
#include <malloc.h>
#include <stdio.h>

int main(){
	int N = 10;
	int* A = (int*)malloc(N*sizeof(int));
	for(int i=0;i<N;i++){
		A[i] = i+1;
	}
	mull(A,N,10);
	double* D = dev(A,N,10);

	for(int i = 0;i<N;i++){
		printf("%d   %f\n",A[i],D[i]);
	}
	int a,b;
	
	scan(&a,&b);
	printf("%d\n",norm(a,b));

	double R = 10;
	double h = 10;
	printf("S = %f\n",S(R));
	printf("V = %f\n",V(R,h));
}
