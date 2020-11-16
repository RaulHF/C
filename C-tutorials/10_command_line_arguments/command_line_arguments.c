#include<stdio.h>
#include<stdlib.h>

int number_multiplier(char **);

int main(int argc, char **argv){

if(2 != argc){
	printf("USEGE\n\t \"%s\" <NUMBER>\n", argv[0]);
	exit(1);
}

int num = number_multiplier(&argv[1]);
printf("2*%s = %d\n", *(argv + 1), num);
return 0;
}

int number_multiplier(char **input){
int x;
return x = 2*atoi(*input);
}
