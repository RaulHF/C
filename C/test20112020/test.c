#include<stdio.h>
#include<unistd.h>

typedef void (*func)(void);
void call_back(func);
void state_1(void);
void state_2(void);
void state_3(void);
void state_4(void);

int main(){
	func p[4] = {state_1, state_2, state_3, state_4};

while(23){
	for(int indx = 0; indx < 4; indx++){
		call_back(p[indx]);
	}
	sleep(1);
}
return 0;
}

void call_back(func pfunc){
	pfunc();
}
void state_1(void){
	printf("Hello state_1\n");
}

void state_2(void){
	printf("Hello state_2\n");
}
void state_3(void){
	printf("Hello state_3\n");
}
void state_4(void){
	printf("Hello state_4\n");
}
