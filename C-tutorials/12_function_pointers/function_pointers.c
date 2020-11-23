#include<stdio.h>
//Hello
typedef double (*pfunc)(double, double);

double add(double, double);
double subs(double, double);
double mult(double, double);

void operation(pfunc, double, double);

int main(){

	pfunc calc;
	double a = 10;
	double b = 11;

	operation(add,  a, b);
	operation(subs, a, b);
	operation(mult, a, b);

	return 0;
}

void operation(pfunc fp, double a, double b){

	double result = fp(a,b);

	printf("result = %0.2lf\n", result);
} 

double add(double a, double b){

	return a + b;
}
double subs(double a, double b){

	return a - b;
}
double mult(double a, double b){

	return a * b;
}
