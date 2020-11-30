#include<stdio.h>
#include<stdlib.h>

/*Create a node*/
typedef struct node{
	int data;
	struct node *next;
}node;

/*Function definition*/
node* create_node(int, node *);
void print_node(node *);

/*Application*/
int main(){

/*struct initialization*/
node *first = NULL;
node *second = NULL;

/*define the structures*/
first = create_node(1, second);
second = create_node(2, NULL);

/*Print nodes*/
print_node(first);
print_node(second);

free(first);
free(second);

return 0;
}

node* create_node(int x, node *new){

	node *n;

	/*Add the allocation check*/
	n = malloc(sizeof(node));
	if(n == NULL){
		printf("Memory no allocate it: line 41");
		exit(0);
	}
	n -> data = x;
	n -> next = new;
	printf("%d\n", n-> next);

	return n;
}

void print_node(node *n){
	printf("data = %d memory location = %p next = %p\n",n -> data, n, n -> next);
}
