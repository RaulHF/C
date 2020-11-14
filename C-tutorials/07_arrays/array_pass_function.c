#include<stdio.h>

void populate_array(double *, int);
void print_array(double *, int);

int main(){
	double a[100] ={0};
	int a_size = sizeof(a)/sizeof(double);

	populate_array(a, a_size);
	print_array(a, a_size);

	return 0;
}

void populate_array(double *a, int a_size){
	for (int indx = 0; indx < a_size; indx++){
		*(a + indx) = (double) indx;
	}
}

void print_array(double *a, int a_size){
	for(int indx = 0; indx < a_size; indx++){
		printf("%.2lf\n", *(a + indx));
	}
}
