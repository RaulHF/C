/*Title: Array code		     */
/*Author: Raul J. Hernandez Fernandez*/
/*Date: 12/11/2020                   */

#include<stdio.h>
#include<stdlib.h>

int main(){

	int a_size = 0;
	printf("Insert the array length\n");
	scanf(" %d",&a_size);
	int variable_array[a_size];

	for(int indx=0; indx < a_size; indx++){
		variable_array[indx] = indx;
		printf("For indx = %d result = %d\n", indx, *(variable_array + indx));
	}

	/*Allocating memory to an array*/
	printf("Allocating memory region.\n");

	int *pm = NULL;

        if(pm == NULL) {
	    fprintf(stderr, "Error allocating memory!\n");
            exit(1);
} 

	pm = malloc(a_size * sizeof(int));

	for( int indx = 0; indx < a_size; indx++){
		pm[indx] = indx;
		printf("For indx = %d result = %d\n", indx, *(pm + indx));
	}

	free(pm);

return 0;
}
