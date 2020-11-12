/*Title: Array code		     */
/*Author: Raul J. Hernandez Fernandez*/
/*Date: 12/11/2020                   */

#include<stdio.h>

int main(){

int a_size = 0;
printf("Insert the array length\n");
scanf(" %d",&a_size);
int variable_array[a_size];

for(int indx=0; indx < a_size; indx++){
	variable_array[indx] = indx;
	printf("For indx = %d result = %d\n", indx, *(variable_array + indx));
}
return 0;
}
