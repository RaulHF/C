#include<stdio.h>

double mathematical_function(char, double, double);

int main(){

	char operation;
	double operand_1 = 0, operand_2 = 0, result = 0;

	printf("This is Raul's scientific calculator.\n");
	printf("Please introduce the operation that you want to perform:\n");
	scanf(" %c", &operation);
	/*Future improvement: Check that it is a legal operation*/
	/*In addtion work out how many operators the operation needs*/
	printf("Introdcue the first operand:\n", operand_1);
	scanf(" %lf", &operand_1);

	printf("Introdcue the second operand:\n", operand_2);
	scanf(" %lf", &operand_2);

	result = mathematical_function(operation, operand_1, operand_2);
	printf("Result: %lf\n", result);

return 0;
}

double mathematical_function(char oper, double op_1, double op_2){

double result = 0;
	switch(oper){
		case '+':
			result = op_1 + op_2;
			break;

		case '-':
			result = op_1 - op_2;
			break;

		case 'x':
			result = op_1 * op_2;
			break;

		case '/':
			result = op_1 / op_2;
			break;

		default:
			printf("Operation not founded.\n");
	}
return result;
}
