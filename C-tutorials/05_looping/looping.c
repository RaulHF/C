#include<stdio.h>

int main(){

/*First of all I will show the do while loop*/
/*and I will use the "at least execute once*/
/*so that we can define the configuration variables*/
/*The do while condition is executed at the end of the*/
/*block*/
	char initial='_';
	char answer ='n';
	char temp=' ';

	do{
		printf("Welcome to the iteration world!\n");
		printf("Introduce your name initial:\n");
		scanf(" %c",&initial);
		printf("Your name inial is %c. Do you want to change it?[y/n]\n",initial);
		scanf(" %c",&answer);
	}while(answer == 'y');

/*The while loop block will execute itself until*/
/*the condiion becomes false. The while loop contidition*/
/*executed at the beginning of the block*/
answer = ' ';
printf("The while loop is about to be executed. Do you want it to be executed?[y/n]\n");
scanf(" %c", &answer);

while(answer != 'n'){
	printf("Do you want to executed again?[y/n]\n");
	scanf(" %c", &answer);

}

/*The for loop block will execute unitil*/
/*the condition becomes false. The for loop structure*/
/*has a condition and a way of changing the contition*/
/*variable inside it.				    */
printf("How many times do you want the for loop to be executed?[0/9]\n");
scanf(" %c",&answer);

for(int indx = 0; indx < ( answer - '0'); indx ++){
	printf("The iteration number is %d of %d.\n", indx, (answer - '0'));
}

printf("I am about to exit the program.\n");
return 0;
}
