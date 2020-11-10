#include<stdio.h>

int main(){

/*First of all I will show the do while loop*/
/*and I will use the "at least execute once*/
/*so that we can define the configuration variables*/
	char initial='_';
	char answer ='n';
	char temp=' ';

	do{
		printf("Welcome to the iteration world!\n");
		printf("Introduce your name initial:\n");
		scanf(" %c",&initial);
		printf("Your name inial is %c. Do you want to change it?\n",initial);
		scanf(" %c",&answer);
	}while(answer == 'y');

	return 0;
}
