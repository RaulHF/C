#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void change_array(char *, int);

int main(){

	char a[] = "Hello world";
	char a_size = sizeof(a)/sizeof(char);

	puts(a);
	change_array(a,  a_size);
	puts(a);


	return 0;
}

	void change_array(char *a, int a_size){
		strcpy(a,"Hello Raul");
}

