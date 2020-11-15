#include<stdio.h>
#include<stdlib.h>

void change_array(double *, int, double);
void print_array(double *, int, char *);
int change_array_size(double **ar, int ar_size);
int main(){

int a_size = 10;
int b_size = 10;
double *a =  calloc(a_size, sizeof(double));

if (NULL == a){
	printf("Memory was not assigned: line 2");
}

for(int indx = 0; indx < a_size; indx++){
	printf("a[%d] = %0.2lf\n", indx, *(a + indx));
}

double b[10] = {0};

for(int indx = 0; indx < a_size; indx++){
	printf("b[%d] = %0.2lf\n", indx, *(b + indx));
}

change_array(a, a_size, 8.0);
change_array(b, b_size, 10.0);
print_array(a, a_size, "array_a");
print_array(b, b_size, "array_b");
a_size = change_array_size(&a, a_size);
change_array(a, a_size, 5.0);
print_array(a, a_size, "array_a");

free(a);

return 0;
}

void print_array(double *ar, int ar_size, char *ar_name){
	for(int indx = 0; indx < ar_size; indx++){
		printf("%s[%d] = %0.1lf\n",ar_name, indx, *(ar +indx));
	}
}
void change_array(double *ar, int ar_size, double val){
	for(int indx = 0; indx < ar_size; indx++){
		*(ar+indx) = val;
	}
}
int change_array_size(double **ar, int ar_size){
	*ar = realloc(*ar, 2*ar_size*sizeof(double));
	if (NULL == ar){
		printf("Memory no allocoated in line 48");
	}
return 2*ar_size;
}
