#include<stdio.h>
#include<stdlib.h>

/*Create a node*/
typedef struct node{
	int data;
	struct node *next;
}node;

/*Function definition*/
node* create_node(int);
void print_node(node *);

/*Application*/
int main(){

/*struct initialization*/
node *first = NULL;
node *second = NULL;
node *third = NULL;

/*define the structures*/
first = create_node(1);
second = create_node(2);
third = create_node(3);

/*Link the next object*/
first -> next =  second;
second -> next = third;

/*Print nodes*/
print_node(first);
print_node(second);
print_node(third);

free(first);
free(second);
free(third);

return 0;
}

node* create_node(int x){

	node *n;

	/*Add the allocation check*/
	n = malloc(sizeof(node));

	if(n == NULL){
		printf("Memory no allocate it: line 41");
		exit(0);
	}
	n -> data = x;
	n -> next = NULL;

	return n;
}

void print_node(node *n){
	printf("data = %d; memory location = %p; next object = %p\n",n -> data, n, n -> next);
}
