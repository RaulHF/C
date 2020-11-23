#include<stdio.h>

typedef void (*pstate)(void);
void state(pstate);
void state_1(void);

int main(){

	state(state_1);
	return 0;
}

void state_1(void){
	printf("Hello from state 1\n");
}

void state(pstate ps){
	ps();
}
