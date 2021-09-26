#include <malloc.h>

void mull(int* Arr,int N,int m){
	for(int i = 0;i<N;i++){
		Arr[i]*=m;
	}
}

double* dev(int* Arr, int N,int A){
	double* R = (double*)malloc(N*sizeof(double));
	for(int i = 0;i<N;i++){
		R[i] = (double)A/((double)Arr[i]);
	}
	return R;
}


