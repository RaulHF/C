#include<stdio.h>

int main(){

	int start;

	printf("Inset options:\n\t[1]To start.\n\t[2]To go to the middle.\n\t[3]To finish.\n");
	scanf("%d", &start);
	
	if(start){
		printf("I am starting\n");
	}
	else if(start == 1){
		printf("I am in the middle\n");
	}
	else{
		printf("I am finishing\n");
	}

	switch(start){
		case 1:
			printf("I am in case 1\n");
			break;
		case 2:
			printf("I am in case 2.\n");
			break;
		case 3:
			printf("I am in case 3.\n");
			break;
		default:
			printf("Error: no option was choose\n");
	}

	return 0;
}
