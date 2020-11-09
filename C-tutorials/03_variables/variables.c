#include<stdio.h>

int main(){

int variable1 = 1;
char variable2 = 'h';
float variable3 = 3.1415;
double variable4 = 2.7182;

printf("variable 1 is an int with a size of %d bytes, at the memory location %p, with a value of %d.\n", sizeof(variable1), &variable1, variable1);

printf("variable 2 is an char with a size of %d bytes, at the memory location %p, with a value of %c.\n", sizeof(variable2), &variable2, variable2);

printf("variable 3 is an float with a size of %d bytes, at the memory location %p, with a value of %f.\n", sizeof(variable3), &variable3, variable3);

printf("variable 4 is an float with a size of %d bytes, at the memory location %p, with a value of %lf.\n", sizeof(variable4), &variable4, variable4);

return 0;
}
