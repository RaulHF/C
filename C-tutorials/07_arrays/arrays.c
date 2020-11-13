/*Title: Array code		     */
/*Author: Raul J. Hernandez Fernandez*/
/*Date: 12/11/2020                   */

#include<stdio.h>
#include<stdlib.h>

int main(){

	int a_size = 0;
	int new_a_size = 0;
	int variable_array[a_size];

	printf("Insert the array length\n");
	scanf(" %d",&a_size);

	for(int indx=0; indx < a_size; indx++){
		variable_array[indx] = indx;
		printf("For indx = %d result = %d\n", indx, *(variable_array + indx));
	}

	/*Allocating memory to an array*/
	printf("Allocating memory\n");

	int *pm = NULL;
	pm = malloc(a_size * sizeof(int));
        if( pm == NULL ) {
	    fprintf(stderr, "Error allocating memory: line 27!\n");
            exit(1);
	}
	for( int indx = 0; indx < a_size; indx++){
		pm[indx] = indx;
		printf("For indx = %d result = %d\n", indx, *(pm + indx));
	}

	/*Reallocating memory*/
	printf("Reallocating memory.\n");

	printf("Introduce the array new size\n");
	scanf("%d",&new_a_size);

	int *tmp = NULL;
	tmp = realloc(pm, new_a_size*sizeof(int));
	if (tmp == NULL){
		fprintf(stderr, "Error re-allocating memory: line 39\n");
		exit(1);
	}

	printf("Memory realocated\n");	
	for(int indx = 0; indx < new_a_size; indx++){
	tmp[indx] = indx;
	printf("a[%d] = %d.\n", indx, tmp[indx]);
	}

free(tmp);

return 0;
}
